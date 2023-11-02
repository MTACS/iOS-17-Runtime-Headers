
@interface SBSwitcherWindowReplacementResult : NSObject {
    SBWorkspaceEntity * _activatingEntity;
    SBLayoutElement * _primaryElement;
    long long  _requestedUnlockedEnvironmentMode;
    SBLayoutElement * _sideElement;
}

@property (nonatomic, readonly) SBWorkspaceEntity *activatingEntity;
@property (nonatomic, readonly) SBLayoutElement *primaryElement;
@property (nonatomic, readonly) long long requestedUnlockedEnvironmentMode;
@property (nonatomic, readonly) SBLayoutElement *sideElement;

+ (id)defaultWindowReplacementResult;
+ (id)windowReplacementResultByRemovingLayoutElements:(id)arg1 fromLayoutState:(id)arg2 withPrecedingLayoutState:(id)arg3 recentAppLayouts:(id)arg4;

- (void).cxx_destruct;
- (id)activatingEntity;
- (id)initWithPrimaryElement:(id)arg1 sideElement:(id)arg2 activatingEntity:(id)arg3 requestedUnlockedEnvironmentMode:(long long)arg4;
- (id)primaryElement;
- (long long)requestedUnlockedEnvironmentMode;
- (id)sideElement;

@end
