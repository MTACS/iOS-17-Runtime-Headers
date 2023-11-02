
@interface _UISearchActivityManager : NSObject <_UISceneComponentProviding> {
    NSMapTable * __activeAssertions;
    UIScene * _scene;
}

@property (nonatomic, retain) NSMapTable *_activeAssertions;
@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeAssertions;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (void)_updateClientSettingsIfNecessary;
- (id)beginTrackingActiveSearchParticipant:(id)arg1;
- (id)initWithScene:(id)arg1;
- (void)set_activeAssertions:(id)arg1;
- (id)windowHostingScene;

@end
