
@interface CSComplicationWrapperViewController : UIViewController {
    UIView * _dimmingView;
    bool  _highlighted;
    CHUISWidgetHostViewController * _widgetHostViewController;
}

@property (nonatomic, retain) UIView *dimmingView;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) CHUISWidgetHostViewController *widgetHostViewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)dealloc;
- (id)dimmingView;
- (id)initWithWidgetHostViewController:(id)arg1;
- (bool)isHighlighted;
- (void)setDimmingView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)viewDidLoad;
- (id)widgetHostViewController;

@end
