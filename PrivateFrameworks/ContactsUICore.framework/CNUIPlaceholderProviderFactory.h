
@interface CNUIPlaceholderProviderFactory : NSObject <CNUIPlaceholderProviderFactory> {
    <CNScheduler> * _highPriorityLock;
    <CNUIPRLikenessProvider> * _loadingGroupPlaceholderProvider;
    <CNUIPRLikenessProvider> * _loadingPlaceholderProvider;
    <CNUIPRLikenessProvider> * _organizationPlaceholderProvider;
    <CNUIPRLikenessProvider> * _placeholderProvider;
    <CNScheduler> * _resourceLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CNScheduler> *highPriorityLock;
@property (readonly) <CNUIPRLikenessProvider> *loadingGroupPlaceholderProvider;
@property (readonly) <CNUIPRLikenessProvider> *loadingPlaceholderProvider;
@property (readonly) <CNUIPRLikenessProvider> *placeholderProvider;
@property (nonatomic, retain) <CNScheduler> *resourceLock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)highPriorityLock;
- (id)init;
- (id)loadingGroupPlaceholderProvider;
- (id)loadingGroupPlaceholderProviderWithBackgroundStyle:(unsigned long long)arg1;
- (id)loadingPlaceholderProvider;
- (id)placeholderProvider;
- (id)placeholderProviderForContact:(id)arg1;
- (id)resourceLock;
- (void)setHighPriorityLock:(id)arg1;
- (void)setResourceLock:(id)arg1;

@end
