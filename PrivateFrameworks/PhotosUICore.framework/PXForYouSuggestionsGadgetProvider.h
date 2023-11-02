
@interface PXForYouSuggestionsGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver> {
    PXSuggestionsDataSource * _dataSource;
    PXSuggestionsDataSourceManager * _dataSourceManager;
    bool  _hasGeneratedGadgets;
    NSMapTable * _keyAssetFetchesBySuggestion;
    NSString * _localizedTitle;
    PXAssetsDataSourceManager * _oneUpDataSourceManager;
    PXAssetReference * _oneUpInitialAssetReference;
}

@property (nonatomic, readonly) PXSuggestionsDataSource *dataSource;
@property (nonatomic, readonly) PXSuggestionsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, retain) PXAssetsDataSourceManager *oneUpDataSourceManager;
@property (nonatomic, retain) PXAssetReference *oneUpInitialAssetReference;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_gadgetForAssetReference:(id)arg1;
- (void)configureGadget:(id)arg1;
- (id)dataSource;
- (id)dataSourceManager;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (void)generateGadgets;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1 localizedTitle:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)keyAssetForSuggestion:(id)arg1;
- (void)loadDataForGadgets;
- (id)localizedTitle;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)oneUpDataSourceManager;
- (id)oneUpInitialAssetReference;
- (void)presentOneUpForSuggestion:(id)arg1 withMediaProvider:(id)arg2 animated:(bool)arg3;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)setOneUpDataSourceManager:(id)arg1;
- (void)setOneUpInitialAssetReference:(id)arg1;
- (void)suggestionGadgetsWantsOneUpPresentation:(id)arg1 withMediaProvider:(id)arg2 animated:(bool)arg3;

@end
