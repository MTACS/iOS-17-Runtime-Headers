
@interface HMLightProfile : HMAccessoryProfile <HMFLogging> {
    <HMLightProfileDelegate> * _delegate;
    NSString * _logIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMLightProfileDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) _HMLightProfile *lightProfile;
@property (readonly) NSString *logIdentifier;
@property (readonly) HMLightProfileSettings *settings;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)delegate;
- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)arg1 completion:(id /* block */)arg2;
- (void)fetchSettingsWithCompletion:(id /* block */)arg1;
- (id)initWithLightProfile:(id)arg1;
- (id)lightProfile;
- (id)logIdentifier;
- (bool)mergeFromNewObject:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNaturalLightingEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setNaturalLightingEnabled:(bool)arg1 shouldRetryOnFailure:(bool)arg2 completion:(id /* block */)arg3;
- (id)settings;
- (void)updateSettings:(id)arg1 withReason:(id)arg2;

@end
