
@interface JFXCapturePreviewStats : NSObject {
    NSString * _name;
    NSObject<OS_dispatch_queue> * _q;
    JFXCapturePreviewFrameStats * _runningAverage;
    NSMutableArray * _stats;
}

@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (void)_print_NoLock;
- (id)add:(id)arg1;
- (void)clear;
- (id)init;
- (id)name;
- (void)print;
- (void)printSync;
- (id)runningAverage;
- (void)setName:(id)arg1;

@end
