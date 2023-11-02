
@interface _UISceneOpenItemProvidersBSActionsHandler : NSObject <_UISceneBSActionHandler, _UISceneBSActionSubstituting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)URLContextsFetchedFromItemProviders:(id)arg1 collectionIdentifier:(id)arg2 contentOwner:(long long)arg3 payload:(id)arg4;
- (id)URLContextsFromOpenItemProvidersActions:(id)arg1 payload:(id)arg2;
- (id)_UIActionTypesForSubstitution;
- (id)_launchOptionsFromActions:(id)arg1 forFBSScene:(id)arg2 uiSceneSession:(id)arg3 transitionContext:(id)arg4;
- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;
- (id)_substituteActionsForAction:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;
- (id)bestUTIForAppFromProviderRegisteredTypeIdentifiers:(id)arg1;
- (bool)currentAppSupportsOpenInPlace;
- (bool)currentAppSupportsReceivingMultipleItems;
- (id)dragContinuationFromEndpoint:(id)arg1;
- (id)itemCollectionFromDragContinuation:(id)arg1;
- (id)itemProvidersFromPBItemCollection:(id)arg1;
- (id)openURLOptionsFromBasePayload:(id)arg1 sourceProcessHandle:(id)arg2 dragContentOwner:(long long)arg3;
- (id)uniqueFileNameWithStakedClaims:(id)arg1 hint:(id)arg2 extension:(id)arg3;

@end
