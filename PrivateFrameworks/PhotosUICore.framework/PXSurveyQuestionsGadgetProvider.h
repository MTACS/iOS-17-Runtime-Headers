
@interface PXSurveyQuestionsGadgetProvider : PXGadgetProvider <PXOneUpPresentationDelegate, PXPhotoLibraryUIChangeObserver, PXSurveyQuestionCongratulationsGadgetDelegate, PXSurveyQuestionGadgetDelegate> {
    bool  _currentlyLoadingMoreQuestions;
    PXSurveyQuestionsDataSource * _dataSource;
    <PXSurveyQuestionsGadgetProviderDelegate> * _gadgetProviderDelegate;
    unsigned long long  _gadgetType;
    PXAssetsDataSourceManager * _oneUpDataSourceManager;
    PXAssetReference * _oneUpInitialAssetReference;
    PXPhotoKitUIMediaProvider * _oneUpMediaProvider;
    PHPhotoLibrary * _photoLibrary;
    PXSurveyQuestionPlaceholderGadget * _placeholderGadget;
    NSDate * _previousMostRecentQuestionCreationDate;
    NSArray * _surveyGadgets;
}

@property (nonatomic) bool currentlyLoadingMoreQuestions;
@property (nonatomic, readonly) PXSurveyQuestionsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PXSurveyQuestionsGadgetProviderDelegate> *gadgetProviderDelegate;
@property (nonatomic, readonly) <PXGadgetTransition> *gadgetTransition;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXGadgetDelegate> *nextGadgetResponder;
@property (nonatomic, retain) NSDate *previousMostRecentQuestionCreationDate;
@property (nonatomic, readonly) PXGadgetNavigationHelper *rootNavigationHelper;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *surveyGadgets;

- (void).cxx_destruct;
- (void)_addCongratulationsGadgetWithCompletionHandlerIfNeeded:(id /* block */)arg1;
- (id)_gadgetForSurveyQuestion:(id)arg1;
- (void)_generateGadgetsWithLimit:(unsigned long long)arg1;
- (void)_generateGadgetsWithLimit:(unsigned long long)arg1 removeExistingGadgets:(bool)arg2;
- (void)_handlePrepareForOneUpPresentationSuccessForGadget:(id)arg1;
- (bool)_prepareForOneUpPresentationForGadget:(id)arg1;
- (void)_reloadGadgetsWithLimit:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)_targetGadgetForCurrentOneUpPresentation;
- (bool)currentlyLoadingMoreQuestions;
- (id)dataSource;
- (void)dealloc;
- (void)didAnswerQuestionForGadget:(id)arg1;
- (void)didSelectActionButtonForType:(unsigned long long)arg1;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)gadgetProviderDelegate;
- (unsigned long long)gadgetType;
- (void)generateGadgets;
- (id)init;
- (id)initWithDataSource:(id)arg1 gadgetType:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1;
- (void)loadDataForGadgets;
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (long long)oneUpPresentationActionContext:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (void)pauseLibraryUpdates;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (id)previousMostRecentQuestionCreationDate;
- (void)resumeLibraryUpdates;
- (void)setCurrentlyLoadingMoreQuestions:(bool)arg1;
- (void)setGadgetProviderDelegate:(id)arg1;
- (void)setPreviousMostRecentQuestionCreationDate:(id)arg1;
- (void)setSurveyGadgets:(id)arg1;
- (void)showViewController:(id)arg1 fromGadget:(id)arg2;
- (id)surveyGadgets;
- (void)surveyQuestionGadgetsWantsOneUpPresentation:(id)arg1;

@end
