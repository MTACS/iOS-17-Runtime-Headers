
@interface UIScreenshotService : NSObject <_UISceneComponentProviding> {
    <UIScreenshotServiceDelegate> * _delegate;
    <UIScreenshotServiceDelegate> * _privateDelegate;
    UIScene * _scene;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIScreenshotServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UIScreenshotServiceDelegate> *privateDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIWindowScene *windowScene;

- (void).cxx_destruct;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (id)delegate;
- (id)initWithScene:(id)arg1;
- (id)privateDelegate;
- (void)setDelegate:(id)arg1;
- (void)setPrivateDelegate:(id)arg1;
- (id)windowScene;

@end
