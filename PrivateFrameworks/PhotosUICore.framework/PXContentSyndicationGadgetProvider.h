
@interface PXContentSyndicationGadgetProvider : PXGadgetProvider <PXCollectionsDataSourceManagerObserver, PXContentSyndicationGadgetDelegate, PXOneUpPresentationDelegate> {
    PXContentSyndicationDataSource * _dataSource;
    PXContentSyndicationDataSourceManager * _dataSourceManager;
    bool  _didGenerateGadgets;
    PXAssetsDataSourceManager * _oneUpDataSourceManager;
    PXAssetReference * _oneUpInitialAssetReference;
}

@property (nonatomic, readonly) PXContentSyndicationDataSource *dataSource;
@property (nonatomic, readonly) PXContentSyndicationDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didGenerateGadgets;
@property (nonatomic, readonly) <PXGadgetTransition> *gadgetTransition;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXGadgetDelegate> *nextGadgetResponder;
@property (nonatomic, readonly) PXGadgetNavigationHelper *rootNavigationHelper;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_gadgetForAssetReference:(id)arg1;
- (id)_newGadgetForContentSyndicationItem:(id)arg1;
- (void)_setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)contentSyndicationGadget:(id)arg1 presentOneUpAnimated:(bool)arg2 asset:(id)arg3;
- (id)countsControllerForContentSyndicationGadget:(id)arg1;
- (id)dataSource;
- (id)dataSourceManager;
- (bool)didGenerateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (bool)oneUpPresentationWantsShowInLibraryButton:(id)arg1;
- (void)setDidGenerateGadgets:(bool)arg1;

@end
