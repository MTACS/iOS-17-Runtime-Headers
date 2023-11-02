
@interface OSLogEventBacktrace : NSObject {
    NSArray * _frames;
}

@property (nonatomic, readonly) NSArray *frames;

- (void)dealloc;
- (id)frames;
- (id)initWithBacktrace:(struct os_log_backtrace_s { struct os_log_backtrace_frame_s {} *x1; int x2; }*)arg1;
- (id)initWithFrames:(id)arg1;
- (id)initWithSingleFrame:(id)arg1;

@end
