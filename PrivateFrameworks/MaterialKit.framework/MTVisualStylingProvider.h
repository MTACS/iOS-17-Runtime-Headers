
@interface MTVisualStylingProvider : NSObject <MTCoreMaterialVisualStylingProviderObserving> {
    MTCoreMaterialVisualStylingProvider * _coreMaterialVisualStylingProvider;
    NSPointerArray * _privateObservers;
    NSMutableDictionary * _styleNamesToVisualStylings;
    NSMapTable * _viewsAndLayersToCoreMaterialVisualStyles;
    NSMapTable * _viewsAndLayersToObserverBlocks;
}

@property (getter=_coreMaterialVisualStylingProvider, nonatomic, retain) MTCoreMaterialVisualStylingProvider *coreMaterialVisualStylingProvider;
@property (getter=_coreMaterialVisualStylingProvider, nonatomic, readonly) MTCoreMaterialVisualStylingProvider *coreMaterialVisualStylingProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_privateObservers, nonatomic, retain) NSPointerArray *privateObservers;
@property (getter=_styleNamesToVisualStylings, nonatomic, retain) NSMutableDictionary *styleNamesToVisualStylings;
@property (readonly) Class superclass;
@property (getter=_viewsAndLayersToCoreMaterialVisualStyles, nonatomic, retain) NSMapTable *viewsAndLayersToCoreMaterialVisualStyles;
@property (getter=_viewsAndLayersToObserverBlocks, nonatomic, retain) NSMapTable *viewsAndLayersToObserverBlocks;

// Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit

+ (Class)_visualStylingClass;
+ (id)_visualStylingProviderForRecipe:(long long)arg1 andCategory:(long long)arg2;
+ (id)_visualStylingProviderForRecipe:(long long)arg1 category:(long long)arg2 andUserInterfaceStyle:(long long)arg3;
+ (id)_visualStylingProviderForRecipeNamed:(id)arg1 andCategory:(long long)arg2;
+ (id)_visualStylingProviderForStyleSetNamed:(id)arg1 inBundle:(id)arg2;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1;
- (void)_automaticallyUpdateView:(id)arg1 withStyleNamed:(id)arg2 andObserverBlock:(id /* block */)arg3;
- (void)_automaticallyUpdateViewOrLayer:(id)arg1 withStyleNamed:(id)arg2 andObserverBlock:(id /* block */)arg3;
- (id)_coreMaterialVisualStylingProvider;
- (bool)_isAutomaticallyUpdatingViewOrLayer:(id)arg1;
- (id)_privateObservers;
- (void)_removeObserver:(id)arg1;
- (void)_stopAutomaticallyUpdatingViewOrLayer:(id)arg1;
- (id)_styleNamesToVisualStylings;
- (void)_updateVisualStyleOfViewOrLayer:(id)arg1;
- (id)_viewsAndLayersToCoreMaterialVisualStyles;
- (id)_viewsAndLayersToObserverBlocks;
- (id)_visualStylingForContinuallyUpdatedView:(id)arg1;
- (id)_visualStylingForStyle:(long long)arg1;
- (id)_visualStylingForStyleNamed:(id)arg1;
- (void)automaticallyUpdateLayer:(id)arg1 withStyle:(long long)arg2;
- (void)automaticallyUpdateLayer:(id)arg1 withStyle:(long long)arg2 andObserverBlock:(id /* block */)arg3;
- (void)automaticallyUpdateView:(id)arg1 withStyle:(long long)arg2;
- (void)automaticallyUpdateView:(id)arg1 withStyle:(long long)arg2 andObserverBlock:(id /* block */)arg3;
- (id)description;
- (id)initWithCoreMaterialVisualStylingProvider:(id)arg1;
- (bool)isAutomaticallyUpdatingLayer:(id)arg1;
- (bool)isAutomaticallyUpdatingView:(id)arg1;
- (id)newAutomaticallyUpdatingViewWithStyle:(long long)arg1;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (void)setCoreMaterialVisualStylingProvider:(id)arg1;
- (void)setPrivateObservers:(id)arg1;
- (void)setStyleNamesToVisualStylings:(id)arg1;
- (void)setViewsAndLayersToCoreMaterialVisualStyles:(id)arg1;
- (void)setViewsAndLayersToObserverBlocks:(id)arg1;
- (void)stopAutomaticallyUpdatingLayer:(id)arg1;
- (void)stopAutomaticallyUpdatingView:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

- (id)_controlCenterKeyLineOnLightVisualStyling;
- (id)_controlCenterScrollViewDarkeningVisualStyling;

@end
