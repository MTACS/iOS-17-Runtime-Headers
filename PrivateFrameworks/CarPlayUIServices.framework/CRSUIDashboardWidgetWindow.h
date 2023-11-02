
@interface CRSUIDashboardWidgetWindow : CRSUIWindow <BSInvalidatable, CRSUIDashboardWidgetWindowClient> {
    NSXPCConnection * _dashboardWindowServiceConnection;
    NSArray * _focusableItems;
    bool  _useSystemPrimaryFocusColor;
    NSArray * _widgetSizes;
}

@property (nonatomic, retain) NSXPCConnection *dashboardWindowServiceConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIColor *focusHighlightColor;
@property (nonatomic, retain) NSArray *focusableItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool useSystemPrimaryFocusColor;
@property (nonatomic, retain) NSArray *widgetSizes;

- (void).cxx_destruct;
- (id)_clientFocusableItemForItem:(id)arg1;
- (id)_focusableItemForClientItem:(id)arg1;
- (void)_invalidateConnection;
- (void)_invalidateCurrentFocusableItems;
- (void)_windowDidCreateContext:(id)arg1;
- (id)dashboardWindowServiceConnection;
- (void)dealloc;
- (id)focusHighlightColor;
- (id)focusableItems;
- (void)hostFocusableItem:(id)arg1 focused:(bool)arg2;
- (void)hostFocusableItem:(id)arg1 pressed:(bool)arg2;
- (void)hostSelectedFocusableItem:(id)arg1;
- (void)hostSetUseSystemPrimaryFocusColor:(bool)arg1;
- (void)hostSetWidgetSizes:(id)arg1;
- (id)initWithWindowScene:(id)arg1;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setContentReady;
- (void)setDashboardWindowServiceConnection:(id)arg1;
- (void)setFocusableItems:(id)arg1;
- (void)setFocusableViews:(id)arg1;
- (void)setNeedsLargeSize:(bool)arg1 animationSettings:(id)arg2;
- (void)setUseSystemPrimaryFocusColor:(bool)arg1;
- (void)setWidgetSizes:(id)arg1;
- (bool)useSystemPrimaryFocusColor;
- (id)widgetSizes;

@end
