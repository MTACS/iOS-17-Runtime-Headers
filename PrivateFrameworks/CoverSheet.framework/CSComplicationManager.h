
@interface CSComplicationManager : NSObject <CHSWidgetDescriptorProviderObserver, CSApplicationInformationObserving> {
    <CSApplicationInforming> * _applicationInformer;
    NSArray * _graphicComplicationDescriptors;
    CSComplicationDescriptor * _inlineComplicationDescriptor;
    CSComplicationDescriptor * _landscapeInlineComplicationDescriptor;
    id /* block */  _onInlineComplicationUpdate;
    id /* block */  _onSidebarIconLayoutUpdate;
    id /* block */  _onSidebarWidgetUpdate;
    id /* block */  _onTintColorUpdate;
    id /* block */  _onWidgetUpdate;
    NSArray * _sidebarComplicationDescriptors;
    NSDictionary * _sidebarIconLayout;
    UIColor * _tintColor;
    <CSWidgetURLHandling> * _urlHandler;
    PRSWallpaperObserver * _wallpaperObserver;
    PRSWallpaperObserverState * _wallpaperState;
    CHSWidgetDescriptorProvider * _widgetDescriptorProvider;
    CHSWidgetHost * _widgetHost;
    PRWidgetMetricsProvider * _widgetMetricsProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ onInlineComplicationUpdate;
@property (nonatomic, copy) id /* block */ onSidebarIconLayoutUpdate;
@property (nonatomic, copy) id /* block */ onSidebarWidgetUpdate;
@property (nonatomic, copy) id /* block */ onTintColorUpdate;
@property (nonatomic, copy) id /* block */ onWidgetUpdate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_bundleHasOpenURLEntitlement:(id)arg1;
- (void)_complicationDescriptorsForWidgets:(id)arg1 completion:(id /* block */)arg2;
- (void)_createComplicationDescriptorForWidget:(id)arg1 withMetrics:(id)arg2 completion:(id /* block */)arg3;
- (void)_openApplicationWithBundleIdentifier:(id)arg1 action:(id)arg2;
- (void)_updateComplicationsForActivePosterConfiguration;
- (void)_updateWidgetHostConfiguration;
- (bool)_widgetHasMatchingSystemDescriptor:(id)arg1;
- (id)_widgetMetricsForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromMetrics:(id)arg2;
- (void)applicationInformer:(id)arg1 updatedApplications:(id)arg2;
- (void)dealloc;
- (void)descriptorsDidChangeForDescriptorProvider:(id)arg1;
- (void)handleLaunchRequestForWidget:(id)arg1 withAction:(id)arg2;
- (id)initWithApplicationInformer:(id)arg1 urlHandler:(id)arg2;
- (id /* block */)onInlineComplicationUpdate;
- (id /* block */)onSidebarIconLayoutUpdate;
- (id /* block */)onSidebarWidgetUpdate;
- (id /* block */)onTintColorUpdate;
- (id /* block */)onWidgetUpdate;
- (void)setOnInlineComplicationUpdate:(id /* block */)arg1;
- (void)setOnSidebarIconLayoutUpdate:(id /* block */)arg1;
- (void)setOnSidebarWidgetUpdate:(id /* block */)arg1;
- (void)setOnTintColorUpdate:(id /* block */)arg1;
- (void)setOnWidgetUpdate:(id /* block */)arg1;

@end
