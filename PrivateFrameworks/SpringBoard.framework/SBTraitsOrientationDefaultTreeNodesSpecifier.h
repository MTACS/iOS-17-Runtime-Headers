
@interface SBTraitsOrientationDefaultTreeNodesSpecifier : SBTraitsOrientationStageComponent <TRAPreferencesStageTreeNodesSpecifying>

@property (nonatomic, readonly) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_activeOrientationOrderedNodesWithContext:(id)arg1;
- (id)updateStageTreeNodesSpecifications:(id)arg1 stageParticipantsRoles:(id)arg2 context:(id)arg3;

@end
