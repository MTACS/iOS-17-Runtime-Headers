
@interface CIDVRGBCaptureTimer : NSObject {
    id /* block */  _block;
    NSNumber * _remainingDuration;
    NSTimer * _timer;
}

- (void).cxx_destruct;
- (void)_runBlock;
- (void)cancel;
- (id)initWithDuration:(double)arg1 block:(id /* block */)arg2;
- (void)pause;
- (void)resume;

@end
