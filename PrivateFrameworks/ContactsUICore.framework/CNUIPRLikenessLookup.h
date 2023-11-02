
@interface CNUIPRLikenessLookup : NSObject <CNUIPRLikenessResolver> {
    CNContactStore * _contactStore;
    CNUIMeContactMonitor * _meMonitor;
    <CNUIPlaceholderProviderFactory> * _placeholderProviderFactory;
    long long  _prohibitedSources;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNUIMeContactMonitor *meMonitor;
@property (nonatomic, retain) <CNUIPlaceholderProviderFactory> *placeholderProviderFactory;
@property (nonatomic) long long prohibitedSources;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;

+ (id)basicMonogramObservableForContactFuture:(id)arg1 monogramColor:(id)arg2;
+ (id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2;
+ (id)contactFuture:(id)arg1 contactStore:(id)arg2 scheduler:(id)arg3;
+ (id)descriptorForRequiredKeys;
+ (id)observableFromLikenessProviderBlock:(id /* block */)arg1 withScheduler:(id)arg2;
+ (id)photoObservableWithPhotoFuture:(id)arg1 likenessFingerprint:(id)arg2 scheduler:(id)arg3;

- (void).cxx_destruct;
- (id)badgeObservableWithLikenessBadge:(id)arg1 workScheduler:(id)arg2;
- (id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2;
- (id)basicMonogramObservableWithContactFuture:(id)arg1 monogramColor:(id)arg2;
- (id)blessedPhotoObservableWithFuture:(id)arg1 contact:(id)arg2 workScheduler:(id)arg3;
- (id)contactStore;
- (id)contentObservableForContact:(id)arg1 placeholderProviderFactory:(id)arg2 options:(id)arg3 workScheduler:(id)arg4;
- (id)futureResultForPhotoImageDataForContact:(id)arg1 error:(id*)arg2;
- (id)initWithContactStore:(id)arg1 scheduler:(id)arg2;
- (id)initWithContactStore:(id)arg1 scheduler:(id)arg2 meMonitor:(id)arg3;
- (id)initWithContactStore:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithContactStore:(id)arg1 schedulerProvider:(id)arg2 meMonitor:(id)arg3;
- (bool)isMeContact:(id)arg1;
- (id)likenessObservableForContact:(id)arg1 placeholderProviderFactory:(id)arg2 options:(id)arg3 workScheduler:(id)arg4;
- (id)likenessesForContact:(id)arg1 options:(id)arg2 workScheduler:(id)arg3;
- (id)likenessesForContact:(id)arg1 workScheduler:(id)arg2;
- (id)loadingPlaceholderWithPlaceholderProviderFactory:(id)arg1;
- (bool)mayIncludeSource:(long long)arg1;
- (id)meMonitor;
- (id)photoFutureForContactFuture:(id)arg1 photoFuture:(id)arg2 allowingFallbackForMeCard:(bool)arg3;
- (id)photoFutureForContactFuture:(id)arg1 scheduler:(id)arg2;
- (id)photoImageDataForContact:(id)arg1 error:(id*)arg2;
- (id)placeholderProviderFactory;
- (long long)prohibitedSources;
- (id)remoteImagesObservableWithContactFuture:(id)arg1 workScheduler:(id)arg2;
- (id)resolveLikenessesForContacts:(id)arg1 workScheduler:(id)arg2 withContentHandler:(id /* block */)arg3;
- (id)schedulerProvider;
- (void)setMeMonitor:(id)arg1;
- (void)setPlaceholderProviderFactory:(id)arg1;
- (void)setProhibitedSources:(long long)arg1;
- (id)silhouetteWithPlaceholderProviderFactory:(id)arg1 contact:(id)arg2 workScheduler:(id)arg3;

@end
