
@interface FigCaptureCMSessionMonitor : NSObject {
    id  _applicationStateChangeNotificationToken;
    int  _clientPID;
    id  _interruptionStateChangeNotificationToken;
    bool  _invalidated;
    struct OpaqueFigSimpleMutex { } * _lock;
    <FigCaptureCMSessionObserver> * _observer;
    FigCaptureCMSession * _session;
}

+ (void)initialize;

- (id)_initWithFigCaptureCMSession:(id)arg1 clientPID:(int)arg2 observer:(id)arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithCMSession:(struct opaqueCMSession { }*)arg1 clientPID:(int)arg2 observer:(id)arg3;
- (void)invalidate;

@end
