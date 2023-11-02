
@protocol BLSHBacklightSceneHostEnvironment <NSObject>

@required

- (void)addObserver:(id <BLSHBacklightSceneHostEnvironmentObserver>)arg1;
- (RBSProcessIdentity *)budgetProcessIdentity;
- (void)clearPresentationDate;
- (void)clientDidRequestInvalidationForReason:(NSString *)arg1;
- (bool)clientHasDelegate;
- (bool)clientSupportsAlwaysOn;
- (void)deactivateClient;
- (bool)hasUnrestrictedFramerateUpdates;
- (NSString *)identifier;
- (void)invalidateContentForReason:(NSString *)arg1;
- (bool)isAlwaysOnEnabledForEnvironment;
- (bool)isClientActive;
- (bool)isDisplayBlanked;
- (bool)isLiveUpdating;
- (NSDate *)presentationDate;
- (void)removeObserver:(id <BLSHBacklightSceneHostEnvironmentObserver>)arg1;
- (void)requestDateSpecifiersForDateInterval:(void *)arg1 previousPresentationDate:(void *)arg2 shouldReset:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSDateInterval *, NSDate *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDateInterval *, NSArray *, void*
- (void)requestedFidelityForInactiveContentWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)setAlwaysOnEnabledForEnvironment:(bool)arg1;
- (void)setDisplayBlanked:(bool)arg1;
- (void)setLiveUpdating:(bool)arg1;
- (void)setUnrestrictedFramerateUpdates:(bool)arg1;
- (void)updateToDateSpecifier:(void *)arg1 sceneContentsUpdated:(void *)arg2; // needs 2 arg types, found 6: BLSAlwaysOnDateSpecifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)updateToVisualState:(void *)arg1 presentationDateSpecifier:(void *)arg2 animated:(void *)arg3 triggerEvent:(void *)arg4 touchTargetable:(void *)arg5 sceneContentsUpdated:(void *)arg6 performBacklightRamp:(void *)arg7 animationComplete:(void *)arg8; // needs 8 arg types, found 21: BLSBacklightSceneVisualState *, BLSAlwaysOnDateSpecifier *, bool, BLSBacklightChangeEvent *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, double, void*, id /* block */, void*, void, id /* block */, void*
- (BLSBacklightSceneVisualState *)visualState;
- (void)willBeginRenderSession:(id <NSObject>)arg1;
- (void)willEndRenderSession:(id <NSObject>)arg1;

@optional

- (bool)isLocal;

@end
