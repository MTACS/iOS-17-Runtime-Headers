
@interface _CNUICachingLikenessRenderer : NSObject <CNAvatarCacheChangeListenerDelegate, CNUILikenessCachingRenderer, CNUILikenessRendering> {
    CNAvatarCacheChangeListener * _changeHistoryListener;
    NSPointerArray * _delegates;
    _CNUILikenessImageCache * _imageCache;
    <CNSchedulerProvider> * _mainThreadSchedulerProvider;
    _CNUILikenessRenderer * _renderer;
    <CNSchedulerProvider> * _schedulerProvider;
    bool  _shouldRequireMainThread;
}

@property (nonatomic, retain) CNAvatarCacheChangeListener *changeHistoryListener;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSPointerArray *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _CNUILikenessImageCache *imageCache;
@property (nonatomic, retain) <CNSchedulerProvider> *mainThreadSchedulerProvider;
@property (nonatomic, readonly) _CNUILikenessRenderer *renderer;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (nonatomic, readonly) bool shouldRequireMainThread;
@property (readonly) Class superclass;

+ (id)_cacheKeyForContacts:(id)arg1 scope:(id)arg2;
+ (id)createMainThreadSchedulerProviderWithSchedulerProvider:(id)arg1;
+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1;
- (id)changeHistoryListener;
- (void)dealloc;
- (id)delegates;
- (id)imageCache;
- (id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2 capacity:(unsigned long long)arg3 shouldRequireMainThread:(bool)arg4;
- (id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2 capacity:(unsigned long long)arg3 shouldRequireMainThread:(bool)arg4 contactStore:(id)arg5;
- (id)initialRenderedLikenessesForContacts:(id)arg1 withBadges:(id)arg2 scope:(id)arg3 workScheduler:(id)arg4;
- (id)loadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(id)arg2;
- (id)mainThreadSchedulerProvider;
- (id)renderedBasicMonogramForString:(id)arg1 color:(id)arg2 scope:(id)arg3 prohibitedSources:(long long)arg4;
- (id)renderedBasicMonogramFromString:(id)arg1 scope:(id)arg2;
- (id)renderedLikenessForBadge:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3;
- (id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3;
- (id)renderedLikenessesForContacts:(id)arg1 withBadges:(id)arg2 scope:(id)arg3 workScheduler:(id)arg4;
- (id)renderer;
- (id)resizeCacheEntry:(id)arg1 withScope:(id)arg2 workScheduler:(id)arg3;
- (id)schedulerProvider;
- (void)setChangeHistoryListener:(id)arg1;
- (void)setDelegates:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setMainThreadSchedulerProvider:(id)arg1;
- (bool)shouldRequireMainThread;
- (id)startCacheEntryWithObservable:(id)arg1 contacts:(id)arg2 scope:(id)arg3;
- (void)updateContactsWithIdentifiers:(id)arg1;

@end
