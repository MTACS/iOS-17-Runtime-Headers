
@protocol _UITextEffectsSceneObserver

@required

- (void)didSnapshot;
- (void)hostAppSceneBoundsChanged;
- (void)willSnapshot;

@end
