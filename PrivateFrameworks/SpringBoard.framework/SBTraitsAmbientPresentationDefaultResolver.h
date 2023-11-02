
@interface SBTraitsAmbientPresentationDefaultResolver : SBTraitsAmbientPresentationStageComponent <TRAPreferencesStageResolving> {
    NSString * _thresholdRole;
}

@property (nonatomic, readonly) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *thresholdRole;

- (void).cxx_destruct;
- (id)init;
- (id)initWithComponentOrder:(id)arg1;
- (id)initWithThresholdRole:(id)arg1 componentOrder:(id)arg2;
- (void)resolveStagePreferencesWithContext:(id)arg1 preferencesTree:(id)arg2;
- (void)setThresholdRole:(id)arg1;
- (id)thresholdRole;

@end
