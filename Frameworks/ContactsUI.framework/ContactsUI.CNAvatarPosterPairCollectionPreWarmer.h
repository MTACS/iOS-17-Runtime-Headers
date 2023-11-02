
@interface ContactsUI.CNAvatarPosterPairCollectionPreWarmer : NSObject {
    void carouselViewModel;
    void carouselViewModelSubscriber;
    void contact;
    void preWarmingRange;
    void windowScene;
    void workQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithContact:(id)arg1 contactForSharedProfile:(id)arg2;
- (void)preWarmFirstPosterSnapshotIn:(id)arg1;

@end
