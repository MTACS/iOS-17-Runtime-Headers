
@interface CNUIPRLikenessResolver : NSObject <CNUIPRLikenessResolver> {
    _CNUILikenessCache * _likenessCache;
    <CNUIPRLikenessResolver> * _likenessResolver;
    <CNSchedulerProvider> * _mainThreadSchedulerProvider;
    <CNUIPlaceholderProviderFactory> * _placeholderProviderFactory;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _CNUILikenessCache *likenessCache;
@property (nonatomic, retain) <CNUIPRLikenessResolver> *likenessResolver;
@property (nonatomic, retain) <CNSchedulerProvider> *mainThreadSchedulerProvider;
@property (nonatomic, retain) <CNUIPlaceholderProviderFactory> *placeholderProviderFactory;
@property (nonatomic) long long prohibitedSources;
@property (nonatomic, readonly) CNSchedulerProvider *schedulerProvider;
@property (readonly) Class superclass;

+ (id)_cacheKeyForContact:(id)arg1;
+ (id)descriptorForRequiredKeys;
+ (unsigned long long)maxContacts;

- (void).cxx_destruct;
- (id)badgeObservableWithLikenessBadge:(id)arg1 workScheduler:(id)arg2;
- (id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2;
- (id)contactStore;
- (void)dealloc;
- (id)initWithContactStore:(id)arg1 scheduler:(id)arg2;
- (id)initWithContactStore:(id)arg1 scheduler:(id)arg2 meMonitor:(id)arg3;
- (id)initWithLikenessResolver:(id)arg1;
- (id)initWithLikenessResolver:(id)arg1 capacity:(unsigned long long)arg2;
- (id)initWithLikenessResolver:(id)arg1 capacity:(unsigned long long)arg2 schedulerProvider:(id)arg3;
- (id)likenessCache;
- (id)likenessLookup;
- (id)likenessResolver;
- (id)likenessesForContact:(id)arg1 options:(id)arg2 workScheduler:(id)arg3;
- (id)likenessesForContact:(id)arg1 workScheduler:(id)arg2;
- (id)mainThreadSchedulerProvider;
- (id)placeholderProviderFactory;
- (long long)prohibitedSources;
- (id)resolveLikenessesForContacts:(id)arg1 workScheduler:(id)arg2 withContentHandler:(id /* block */)arg3;
- (id)schedulerProvider;
- (void)setLikenessCache:(id)arg1;
- (void)setLikenessResolver:(id)arg1;
- (void)setMainThreadSchedulerProvider:(id)arg1;
- (void)setPlaceholderProviderFactory:(id)arg1;
- (void)setProhibitedSources:(long long)arg1;

@end
