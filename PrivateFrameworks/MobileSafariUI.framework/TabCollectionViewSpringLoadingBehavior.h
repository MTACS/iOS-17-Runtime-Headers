
@interface TabCollectionViewSpringLoadingBehavior : NSObject <UISpringLoadedInteractionBehavior, UISpringLoadedInteractionEffect> {
    <UISpringLoadedInteractionBehavior> * _behavior;
    <UISpringLoadedInteractionEffect> * _effect;
    <TabCollectionView><TabCollectionViewDragDropSupport> * _tabView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <TabCollectionView><TabCollectionViewDragDropSupport> *tabView;

+ (void)addSpringLoadedInteractionToTabView:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (void)interactionDidFinish:(id)arg1;
- (void)setTabView:(id)arg1;
- (bool)shouldAllowInteraction:(id)arg1 withContext:(id)arg2;
- (id)tabView;

@end
