
@interface HFCameraAnalyticsPayloadDecorator : NSObject <HFHomeManagerObserver> {
    NSMutableDictionary * _additionalPayload;
}

@property (nonatomic, retain) NSMutableDictionary *additionalPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedDecorator;

- (void).cxx_destruct;
- (void)_initialiseAdditionalPayload;
- (void)_initialiseAdditionalPayloadForNewHome;
- (void)_updateHomeInformation:(id)arg1;
- (id)additionalPayload;
- (id)decoratePayload:(id)arg1;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (id)init;
- (void)setAdditionalPayload:(id)arg1;

@end
