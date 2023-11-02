
@interface CRXFCalibrationDataDownload : NSObject {
    id /* block */  _completion;
    CRXUDispatchQueue * _completionQueue;
    bool  _finished;
    double  _roundtripTime;
    double  _startTime;
    CRXUTimer * _timer;
}

@property (nonatomic, readonly) double roundtripTime;

- (void).cxx_destruct;
- (void)finishWithData:(id)arg1 error:(id)arg2;
- (id)initWithTimeout:(double)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (double)roundtripTime;
- (void)timerDidFire:(id)arg1;

@end
