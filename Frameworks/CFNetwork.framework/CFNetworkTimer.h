
@interface CFNetworkTimer : NSObject {
    double  _interval;
    double  _lastPauseTime;
    double  _lastResumeTime;
    double  _runTime;
    int  _state;
    NSObject<OS_dispatch_source> * _timer;
}

- (void)dealloc;

@end
