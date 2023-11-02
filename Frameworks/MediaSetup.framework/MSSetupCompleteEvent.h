
@interface MSSetupCompleteEvent : MSBaseSetupEvent {
    bool  _didSwitchAccount;
    NSDate * _endTime;
    unsigned long long  _numberOfHomeAdded;
    unsigned long long  _numberOfHomesWithVR;
    bool  _openDefaultService;
    NSString * _serviceID;
    NSDate * _startTime;
}

@property (nonatomic) bool didSwitchAccount;
@property (nonatomic, retain) NSDate *endTime;
@property (nonatomic) unsigned long long numberOfHomeAdded;
@property (nonatomic) unsigned long long numberOfHomesWithVR;
@property (nonatomic) bool openDefaultService;
@property (nonatomic, retain) NSString *serviceID;
@property (nonatomic, retain) NSDate *startTime;

- (void).cxx_destruct;
- (void)addHome:(id)arg1;
- (bool)didSwitchAccount;
- (id)encoded;
- (id)endTime;
- (id)init;
- (unsigned long long)numberOfHomeAdded;
- (unsigned long long)numberOfHomesWithVR;
- (bool)openDefaultService;
- (id)serviceID;
- (void)setDidSwitchAccount:(bool)arg1;
- (void)setEndTime:(id)arg1;
- (void)setNumberOfHomeAdded:(unsigned long long)arg1;
- (void)setNumberOfHomesWithVR:(unsigned long long)arg1;
- (void)setOpenDefaultService:(bool)arg1;
- (void)setServiceID:(id)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;

@end
