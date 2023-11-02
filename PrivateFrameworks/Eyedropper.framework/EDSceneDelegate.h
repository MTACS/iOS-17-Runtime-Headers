
@interface EDSceneDelegate : UIResponder <EDWindowTrackingDelegate, UIWindowSceneDelegate> {
    double  _touchesBeganTime;
    UIWindow * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (id)appDelegate;
- (id)lensView;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)setWindow:(id)arg1;
- (void)trackedTouchesBegan:(id)arg1;
- (void)trackedTouchesCancelled:(id)arg1;
- (void)trackedTouchesEnded:(id)arg1;
- (void)trackedTouchesMoved:(id)arg1;
- (id)window;

@end
