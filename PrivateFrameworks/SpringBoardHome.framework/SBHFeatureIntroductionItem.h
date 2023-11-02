
@interface SBHFeatureIntroductionItem : NSObject <SBHFeatureIntroductionProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureIntroductionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)displayFeatureIntroductionAtLocations:(unsigned long long)arg1 presentCompletion:(id /* block */)arg2 dismissCompletion:(id /* block */)arg3;
- (id)featureIntroductionIdentifier;
- (void)setupFeatureIntroductionAtLocations:(unsigned long long)arg1;
- (bool)shouldDisplayFeatureIntroductionAtLocations:(unsigned long long)arg1;
- (bool)shouldSetupFeatureIntroductionAtLocations:(unsigned long long)arg1;

@end
