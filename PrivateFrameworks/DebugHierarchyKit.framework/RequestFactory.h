
@interface RequestFactory : NSObject

+ (id)_crossPlatformPropertyActions;
+ (id)_effectViewClassNames;
+ (id)_propertyActionsForMac;
+ (id)_propertyActionsForMacCatalyst;
+ (id)_propertyActionsForPlatform:(id)arg1;
+ (id)_propertyActionsForTvOS;
+ (id)_propertyActionsForWatchOS;
+ (id)_propertyActionsForiOS;
+ (id)_requestForEncodedLayersWithSnapshot:(id)arg1;
+ (id)_requestForEncodedSceneKitScenesWithSnapshot:(id)arg1;
+ (id)_requestForRenderedEffectViewsWithSnapshot:(id)arg1;
+ (id)_requestForRenderedMultiLayerViewsWithSnapshot:(id)arg1;
+ (id)_requestForRenderedSpriteKitTexturesWithSnapshot:(id)arg1;
+ (id)_requestForRenderedViewsWithSnapshot:(id)arg1;
+ (id)additionalRequestsWithSnapshot:(id)arg1;
+ (id)initialRequestForPlatform:(id)arg1;
+ (id)requestForRemainingLazyPropertiesWithSnapshot:(id)arg1;

@end
