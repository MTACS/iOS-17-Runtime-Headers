
@interface SBSystemActionPreviewCoordinator : NSObject <SBSystemActionPreviewCoordinating> {
    NSHashTable * _activeSceneElementProviders;
    NSMapTable * _activeSimplePreviewElementsToAssertions;
    NSHashTable * _observers;
    NSMutableSet * _previewProviders;
    SBWindowScene * _windowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (id)customSoundForPerformingAction:(id)arg1;
- (id)previewContextForAction:(id)arg1;
- (void)provideDiscreteNoActionInteractionFeedback;
- (id)showPreviewForAction:(id)arg1 withContext:(id)arg2;
- (id)windowScene;

@end
