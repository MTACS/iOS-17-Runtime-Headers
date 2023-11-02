
@interface AVBorealisServerPortManager : NSObject {
    long long  _generation;
    float  _hysteresisDurationSeconds;
    bool  _lastStateSent;
    bool  _listeningEnabled;
    id /* block */  _notificationBlock;
    unsigned long long  _portType;
}

@property (nonatomic) long long generation;
@property (nonatomic) float hysteresisDurationSeconds;
@property (nonatomic) bool lastStateSent;
@property (nonatomic) bool listeningEnabled;
@property (nonatomic, copy) id /* block */ notificationBlock;
@property (nonatomic) unsigned long long portType;

- (void).cxx_destruct;
- (void)callNotificationBlock:(bool)arg1;
- (long long)generation;
- (float)hysteresisDurationSeconds;
- (id)initWithPortType:(unsigned long long)arg1 hysteresisDurationSeconds:(float)arg2 notificationBlock:(id /* block */)arg3;
- (bool)lastStateSent;
- (bool)listeningEnabled;
- (id /* block */)notificationBlock;
- (void)notifyStateChanged:(bool)arg1 onQueue:(id)arg2;
- (unsigned long long)portType;
- (void)setGeneration:(long long)arg1;
- (void)setHysteresisDurationSeconds:(float)arg1;
- (void)setLastStateSent:(bool)arg1;
- (void)setListeningEnabled:(bool)arg1;
- (void)setNotificationBlock:(id /* block */)arg1;
- (void)setPortType:(unsigned long long)arg1;

@end
