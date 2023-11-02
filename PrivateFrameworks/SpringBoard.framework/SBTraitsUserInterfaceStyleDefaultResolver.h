
@interface SBTraitsUserInterfaceStyleDefaultResolver : SBTraitsUserInterfaceStyleStageComponent <TRAPreferencesStageResolving>

@property (nonatomic, readonly) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)resolveStagePreferencesWithContext:(id)arg1 preferencesTree:(id)arg2;

@end
