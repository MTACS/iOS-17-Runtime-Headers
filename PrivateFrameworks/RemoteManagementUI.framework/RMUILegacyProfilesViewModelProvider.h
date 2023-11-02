
@interface RMUILegacyProfilesViewModelProvider : NSObject {
    RMObserverStore * _observerStore;
    NSMutableArray * _profileViewModels;
    long long  _scope;
}

@property (nonatomic, retain) RMObserverStore *observerStore;
@property (nonatomic, retain) NSMutableArray *profileViewModels;
@property (nonatomic, readonly) long long scope;

- (void).cxx_destruct;
- (void)_updateViewModelsWithDeclarations:(id)arg1;
- (id)initWithScope:(long long)arg1;
- (void)loadProfilesFromConfigurationsWithCompletionHandler:(id /* block */)arg1;
- (id)observerStore;
- (id)profileViewModels;
- (long long)scope;
- (void)setObserverStore:(id)arg1;
- (void)setProfileViewModels:(id)arg1;

@end
