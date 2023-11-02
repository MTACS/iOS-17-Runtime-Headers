
@interface _UICalloutBarVisualStyle : NSObject {
    _UICalloutBarMetrics * _barMetrics;
    _UICalloutBarButtonMetrics * _buttonMetrics;
    UICalloutBar * _calloutBar;
}

@property (nonatomic, readonly) _UICalloutBarMetrics *barMetrics;
@property (nonatomic, readonly) _UICalloutBarButtonMetrics *buttonMetrics;
@property (nonatomic, readonly) UICalloutBar *calloutBar;

- (void).cxx_destruct;
- (id)barMetrics;
- (id)buttonMetrics;
- (id)calloutBar;
- (void)calloutBarDidDisappear:(id)arg1;
- (void)calloutBarWillAppear:(id)arg1;
- (id)initWithCalloutBar:(id)arg1;
- (void)updateCalloutBar:(id)arg1 withContentButtons:(id)arg2;

@end
