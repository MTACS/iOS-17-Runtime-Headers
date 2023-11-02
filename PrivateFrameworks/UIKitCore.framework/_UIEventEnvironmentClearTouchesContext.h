
@interface _UIEventEnvironmentClearTouchesContext : NSObject {
    UIView * _view;
    UIWindow * _window;
}

@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) UIWindow *window;

- (id)view;
- (id)window;

@end
