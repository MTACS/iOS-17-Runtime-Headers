
@interface _CRKCardSectionViewLoader : NSObject <CRKCardSectionViewSourcing> {
    NSMutableDictionary * _cardSectionViewConfigurationsByCardSectionIdentifiersByProviderIdentifiers;
    <_CRKCardSectionViewLoaderDelegate> * _delegate;
    NSMutableSet * _identifiedCardSectionViewProviders;
    <CRCard> * _loadedCard;
    NSMutableDictionary * _vetoingProviderIdentifiersByVetoedCardSectionIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_CRKCardSectionViewLoaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableSet *identifiedCardSectionViewProviders;
@property (nonatomic, retain) <CRCard> *loadedCard;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allViewConfigurations;
- (void)_loadIdentifiedCardSectionViewProvidersFromCard:(id)arg1 identifiedProviders:(id)arg2 delegate:(id)arg3 completion:(id /* block */)arg4;
- (id)_viewConfigurationForCardSection:(id)arg1 providerIdentifier:(id)arg2;
- (bool)cardSectionShouldBeDisplayed:(id)arg1;
- (id)delegate;
- (id)identifiedCardSectionViewProviders;
- (id)init;
- (id)loadedCard;
- (void)setDelegate:(id)arg1;
- (void)setLoadedCard:(id)arg1;
- (id)viewConfigurationForCardSection:(id)arg1;

@end
