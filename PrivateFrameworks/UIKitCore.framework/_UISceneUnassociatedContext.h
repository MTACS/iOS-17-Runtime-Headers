
@interface _UISceneUnassociatedContext : NSObject {
    UIScene * _scene;
    UISceneSession * _session;
}

@property (nonatomic, retain) UIScene *scene;
@property (nonatomic, retain) UISceneSession *session;

- (void).cxx_destruct;
- (id)scene;
- (id)session;
- (void)setScene:(id)arg1;
- (void)setSession:(id)arg1;

@end
