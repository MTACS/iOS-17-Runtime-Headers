
@interface MSSetupEarlyExitEvent : MSBaseSetupEvent {
    bool  _didEncounterError;
    NSString * _exitReason;
    NSString * _serviceID;
}

@property (nonatomic) bool didEncounterError;
@property (nonatomic, retain) NSString *exitReason;
@property (nonatomic, retain) NSString *serviceID;

- (void).cxx_destruct;
- (bool)didEncounterError;
- (id)encoded;
- (id)exitReason;
- (id)initWithExitReason:(id)arg1 didEncounterError:(bool)arg2;
- (id)serviceID;
- (void)setDidEncounterError:(bool)arg1;
- (void)setExitReason:(id)arg1;
- (void)setServiceID:(id)arg1;

@end
