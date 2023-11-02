
@interface SBHWidgetWrapperBackgroundView : UIView {
    UIView * _underlyingBackgroundView;
    UIView * _widgetBackgroundView;
}

@property (nonatomic, readonly) UIView *underlyingBackgroundView;
@property (nonatomic, readonly) UIView *widgetBackgroundView;

- (void).cxx_destruct;
- (id)initWithUnderlyingBackgroundView:(id)arg1 widgetBackgroundView:(id)arg2;
- (id)underlyingBackgroundView;
- (id)widgetBackgroundView;

@end
