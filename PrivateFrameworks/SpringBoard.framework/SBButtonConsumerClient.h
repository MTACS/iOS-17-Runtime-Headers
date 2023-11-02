
@interface SBButtonConsumerClient : NSObject {
    bool  _application;
    bool  _entitledToConsumeButtonsInBackground;
    NSMutableSet * _registrations;
    bool  _runningVisible;
    bool  _suspended;
    <FBSServiceFacilityClientHandle> * _systemServiceClient;
}

@property (getter=isApplication, nonatomic) bool application;
@property (nonatomic, readonly) bool canReceiveEvents;
@property (getter=isEntitledToConsumeButtonsInBackground, nonatomic) bool entitledToConsumeButtonsInBackground;
@property (nonatomic, retain) NSMutableSet *registrations;
@property (getter=isRunningVisible, nonatomic) bool runningVisible;
@property (getter=isSuspended, nonatomic) bool suspended;
@property (nonatomic, retain) <FBSServiceFacilityClientHandle> *systemServiceClient;

- (void).cxx_destruct;
- (bool)canReceiveEvents;
- (id)description;
- (unsigned long long)hash;
- (bool)isApplication;
- (bool)isEntitledToConsumeButtonsInBackground;
- (bool)isEqual:(id)arg1;
- (bool)isRunningVisible;
- (bool)isSuspended;
- (id)registrations;
- (void)setApplication:(bool)arg1;
- (void)setEntitledToConsumeButtonsInBackground:(bool)arg1;
- (void)setRegistrations:(id)arg1;
- (void)setRunningVisible:(bool)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setSystemServiceClient:(id)arg1;
- (id)systemServiceClient;

@end
