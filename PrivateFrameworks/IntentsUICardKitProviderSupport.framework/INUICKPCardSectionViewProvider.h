
@interface INUICKPCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding, INUICKPViewControllerAllocatingDelegate> {
    <INUICKPViewControllerAllocating> * _allocator;
    <CRCard> * _card;
    <CRKCardSectionViewProviderDelegate> * _cardSectionViewProviderDelegate;
    NSArray * _viewConfigurations;
}

@property (nonatomic, retain) <INUICKPViewControllerAllocating> *allocator;
@property (nonatomic, readonly) <CRCard> *card;
@property (nonatomic) <CRKCardSectionViewProviderDelegate> *cardSectionViewProviderDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *providerIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *viewConfigurations;

+ (id)_viewConfigurationsFromAllocator:(id)arg1;
+ (void)requestInstanceFromDefaultAllocatorWithCard:(id)arg1 delegate:(id)arg2 reply:(id /* block */)arg3;
+ (void)requestInstanceWithCard:(id)arg1 delegate:(id)arg2 allocator:(id)arg3 reply:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)allocator;
- (double)boundingWidthForViewControllerAllocator:(id)arg1;
- (id)card;
- (id)cardSectionViewProviderDelegate;
- (unsigned long long)displayPriorityForCardSection:(id)arg1;
- (id)providerIdentifier;
- (void)setAllocator:(id)arg1;
- (void)setCardSectionViewProviderDelegate:(id)arg1;
- (void)setViewConfigurations:(id)arg1;
- (bool)vetoDisplayOfCardSection:(id)arg1;
- (id)viewConfigurations;

@end
