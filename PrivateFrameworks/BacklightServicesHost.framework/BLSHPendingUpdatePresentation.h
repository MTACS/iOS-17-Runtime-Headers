
@interface BLSHPendingUpdatePresentation : NSObject <BLSHPendingOperation> {
    bool  _completed;
    BLSHBacklightEnvironmentPresentation * _presentation;
    bool  _started;
    long long  _targetBacklightState;
}

@property (getter=isCompleted) bool completed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) BLSHBacklightEnvironmentPresentation *presentation;
@property (getter=isStarted) bool started;
@property (readonly) Class superclass;
@property long long targetBacklightState;
@property (readonly) long long type;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPresentation:(id)arg1;
- (bool)isCompleted;
- (bool)isStarted;
- (id)presentation;
- (void)setCompleted:(bool)arg1;
- (void)setStarted:(bool)arg1;
- (void)setTargetBacklightState:(long long)arg1;
- (long long)targetBacklightState;
- (long long)type;

@end
