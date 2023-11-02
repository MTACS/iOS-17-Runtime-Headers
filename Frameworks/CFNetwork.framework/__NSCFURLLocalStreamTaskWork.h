
@interface __NSCFURLLocalStreamTaskWork : NSObject {
    bool  _hasBeenCalledBack;
    NSError * _recvdError;
    const char * _static_description;
    double  _timeout;
    double  _timeoutTime;
    bool  _timerStarted;
}

- (id)description;

@end
