
@interface HFAbstractBaseActionSetBuilder : HFItemBuilder <HFActionSetBuilderProtocol, NSCopying> {
    HFMutableSetDiff * _actionBuilders;
    NSArray * _actions;
}

@property (nonatomic, retain) HFMutableSetDiff *actionBuilders;
@property (nonatomic, retain) HMActionSet *actionSet;
@property (nonatomic, readonly) NSArray *actions;
@property (getter=isAffectedByEndEvents, nonatomic, readonly) bool affectedByEndEvents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFMediaPlaybackActionBuilder *mediaAction;
@property (nonatomic, readonly) NSArray *naturalLightingActions;
@property (nonatomic, readonly) bool requiresDeviceUnlock;
@property (readonly) Class superclass;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)_removeSuccessfulChanges:(id)arg1 fromSetDiff:(id)arg2;
- (bool)_updateActionBuildersForLightColorAction:(id)arg1;
- (id)actionBuilders;
- (id)actionSet;
- (id)actions;
- (void)addAction:(id)arg1;
- (id)commitItem;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createActionSetBuilder;
- (id)deleteActionSet;
- (id)existingActionBuilder:(id)arg1 inSet:(id)arg2;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (bool)isAffectedByEndEvents;
- (id)lazilyUpdateActions;
- (id)mediaAction;
- (id)naturalLightingActions;
- (void)removeAction:(id)arg1;
- (void)removeAllActions;
- (bool)requiresDeviceUnlock;
- (void)setActionBuilders:(id)arg1;
- (void)setActionSet:(id)arg1;
- (void)updateAction:(id)arg1;
- (void)updateActionsInBuilder:(id)arg1;

@end
