
@interface HMDAssistantIntent : NSObject <HMFLogging> {
    NSArray * _homeKitObjects;
    INControlHomeIntent * _intent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *homeKitObjects;
@property (nonatomic, retain) INControlHomeIntent *intent;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_getObjectsWithUUID;
- (void)_handleActionSetForConfirmation:(id)arg1 message:(id)arg2;
- (void)_handleActionSetForExecution:(id)arg1 message:(id)arg2;
- (void)_handleIntentRequestMessage:(id)arg1;
- (id)homeKitObjects;
- (id)initWithIntent:(id)arg1;
- (id)intent;
- (void)performWithGather:(id)arg1 message:(id)arg2;
- (void)setHomeKitObjects:(id)arg1;
- (void)setIntent:(id)arg1;

@end
