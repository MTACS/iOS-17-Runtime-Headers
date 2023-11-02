
@interface CSTestingSupportWidgetProvider : NSObject <CSWidgetGroupViewControllerProviding, WGWidgetDiscoveryControllerDelegate> {
    WGWidgetDiscoveryController * _widgetDiscoveryController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)newWidgetGroupViewControllerWithSettings:(struct WGWidgetListSettings { unsigned long long x1; bool x2; bool x3; bool x4; })arg1;
- (id)newWidgetListViewControllerWithSettings:(struct WGWidgetListSettings { unsigned long long x1; bool x2; bool x3; bool x4; })arg1;

@end
