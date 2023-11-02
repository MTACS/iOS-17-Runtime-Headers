
@interface FBKSubmissionTimer : NSObject {
    <FBKSubmissionTimerDelegate> * _delegate;
    double  _givenInterval;
    FBKUploadTask * _task;
    NSTimer * _timer;
}

@property <FBKSubmissionTimerDelegate> *delegate;
@property double givenInterval;
@property (retain) FBKUploadTask *task;
@property (retain) NSTimer *timer;

- (void).cxx_destruct;
- (double)currentInterval;
- (void)dealloc;
- (id)delegate;
- (double)givenInterval;
- (id)initWithDelegate:(id)arg1 forTask:(id)arg2 initialTimeout:(double)arg3;
- (void)resetTimerWithInterval:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGivenInterval:(double)arg1;
- (void)setTask:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)task;
- (id)timer;
- (void)timerDidTick;

@end
