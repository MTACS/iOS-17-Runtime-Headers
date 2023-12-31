
@interface IKAppTabBar : NSObject {
    <IKAppTabBarController> * _controller;
    IKJSTabBar * _jsTabBar;
}

@property (nonatomic, readonly) <IKAppTabBarController> *controller;
@property (nonatomic) IKJSTabBar *jsTabBar;

- (void).cxx_destruct;
- (id)controller;
- (id)initWithTabBarController:(id)arg1;
- (id)jsTabBar;
- (void)onSelect;
- (void)setJsTabBar:(id)arg1;

@end
