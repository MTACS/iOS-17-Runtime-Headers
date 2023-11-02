
@interface REUIElementDonatedActionAction : REElementAction <REUISiriActionsPerformerDelegate> {
    REUISiriActionsPerformer * _performer;
    REUIDonatedElementProperties * _properties;
}

@property (nonatomic, readonly) UIImage *appIcon;
@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <REUIElementDonatedActionActionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) REUISiriActionsPerformer *performer;
@property (nonatomic, retain) REUIDonatedElementProperties *properties;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_newPerformer;
- (void)_performWithContext:(id)arg1;
- (id)appIcon;
- (id)appName;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)fullsizeAppIcon;
- (id)initWithProperties:(id)arg1;
- (id)performer;
- (id)properties;
- (void)setPerformer:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)siriActionsPerformer:(id)arg1 didFailWithError:(id)arg2;
- (bool)siriActionsPerformer:(id)arg1 wantsToDismissViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (bool)siriActionsPerformer:(id)arg1 wantsToPresentViewController:(id)arg2;
- (void)siriActionsPerformerDidSucceed:(id)arg1;
- (id)siriActionsPerformerWantsAlertBackgroundImage:(id)arg1;
- (id)siriActionsPerformerWantsBackgroundViewToBlur:(id)arg1;
- (void)siriActionsPerformerWantsToSuppressDismissal:(id)arg1;

@end
