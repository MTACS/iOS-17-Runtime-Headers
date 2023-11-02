
@interface SearchUIPhotosOneUpController : NSObject <PXActionPerformerDelegate, PXOneUpPresentationDelegate> {
    PXPhotoKitAssetsDataSourceManager * _activeDataSourceManager;
    SFShowPhotosOneUpViewCommand * _command;
    SearchUICommandEnvironment * _commandEnvironment;
    UIView * _hiddenView;
    bool  _isSyndicated;
    PXAssetReference * _navigatedAssetReference;
    UIViewController * _peekedViewController;
    NSDictionary * _rowModelsForCorespotlightIdentifiers;
}

@property (nonatomic, retain) PXPhotoKitAssetsDataSourceManager *activeDataSourceManager;
@property (nonatomic, retain) SFShowPhotosOneUpViewCommand *command;
@property (retain) SearchUICommandEnvironment *commandEnvironment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property UIView *hiddenView;
@property (nonatomic) bool isSyndicated;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory;
@property (nonatomic, retain) PXAssetReference *navigatedAssetReference;
@property UIViewController *peekedViewController;
@property (retain) NSDictionary *rowModelsForCorespotlightIdentifiers;
@property (readonly) Class superclass;

+ (id)bundleIdentifierForAsset:(id)arg1;
+ (id)corespotlightIdentifierForAsset:(id)arg1;
+ (id)sharedController;

- (void).cxx_destruct;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (id)activeDataSourceManager;
- (id)command;
- (id)commandEnvironment;
- (id)hiddenView;
- (id)imageViewInView:(id)arg1;
- (bool)isSyndicated;
- (id)navigatedAssetReference;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (long long)oneUpPresentationActionContext:(id)arg1;
- (id)oneUpPresentationActionManager:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMatchedAudioIdentifiers:(id)arg1;
- (id)oneUpPresentationMatchedHumanActionIdentifiers:(id)arg1;
- (id)oneUpPresentationMatchedPersonLocalIdentifiers:(id)arg1;
- (id)oneUpPresentationMatchedQueryStrings:(id)arg1;
- (id)oneUpPresentationMatchedSceneIdentifiers:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (id)peekedViewController;
- (void)presentOneUpViewForRowModel:(id)arg1 triggerEvent:(unsigned long long)arg2 environment:(id)arg3;
- (id)previewViewControllerForRowModel:(id)arg1 environment:(id)arg2;
- (id)rowModelForAsset:(id)arg1;
- (id)rowModelForAssetReference:(id)arg1;
- (id)rowModelsForCorespotlightIdentifiers;
- (void)setActiveDataSourceManager:(id)arg1;
- (void)setCommand:(id)arg1;
- (void)setCommandEnvironment:(id)arg1;
- (void)setHiddenView:(id)arg1;
- (void)setIsSyndicated:(bool)arg1;
- (void)setNavigatedAssetReference:(id)arg1;
- (void)setPeekedViewController:(id)arg1;
- (void)setRowModelsForCorespotlightIdentifiers:(id)arg1;
- (id)undoManagerForActionPerformer:(id)arg1;
- (bool)updateWithCoreSpotlightIdentifiers:(id)arg1 currentCorespotlightIdentifier:(id)arg2;
- (bool)updateWithRowModel:(id)arg1 environment:(id)arg2;
- (id)viewForAssetReference:(id)arg1;

@end
