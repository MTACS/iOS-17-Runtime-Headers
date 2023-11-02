
@interface FMIPCore.FMIPDeviceImageCacheOperation : NSOperation {
    void _isFinished;
    void completion;
    void request;
}

@property (nonatomic, readonly) bool asynchronous;
@property (nonatomic) bool finished;

- (void).cxx_destruct;
- (id)init;
- (bool)isAsynchronous;
- (bool)isFinished;
- (void)main;
- (void)setFinished:(bool)arg1;
- (void)start;

@end
