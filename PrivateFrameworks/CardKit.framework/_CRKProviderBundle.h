
@interface _CRKProviderBundle : NSBundle <CRKIdentifiedProviding> {
    <CRKProviding> * _provider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *providerIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initializeProviderWithClass:(Class)arg1;
- (id)cardViewControllerForCard:(id)arg1;
- (unsigned long long)displayPriorityForCard:(id)arg1;
- (void)presentation:(id)arg1 didApplyCardSectionViewSource:(id)arg2 toCardViewController:(id)arg3;
- (id)provider;
- (id)providerIdentifier;
- (void)requestCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(id /* block */)arg3;
- (void)requestIdentifiedCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(id /* block */)arg3;
- (void)unregisterCardViewController:(id)arg1;

@end
