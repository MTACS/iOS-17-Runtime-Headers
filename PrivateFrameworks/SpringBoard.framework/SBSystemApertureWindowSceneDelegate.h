
@interface SBSystemApertureWindowSceneDelegate : NSObject <UIWindowSceneDelegate> {
    SBSystemApertureCurtainWindowScene * _superHighLevelCurtainWindowScene;
    SBSystemApertureWindowScene * _systemApertureWindowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (id)_associatedWindowSceneForScene:(id)arg1;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;

@end
