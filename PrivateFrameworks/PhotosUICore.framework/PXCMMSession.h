
@interface PXCMMSession : NSObject <PXTapToRadar> {
    PXCMMActionManager * _actionManager;
    unsigned long long  _activityType;
    PXAssetsDataSourceManager * _dataSourceManager;
    bool  _hideActionMenu;
    NSString * _importSessionID;
    PXUIMediaProvider * _mediaProvider;
    PXMomentShareStatus * _momentShareStatus;
    PXPeopleSuggestionsDataSourceManager * _peopleSuggestionsDataSourceManager;
    PXPeopleSuggestionsDataSourceManager * _peopleSuggestionsPreviewDataSourceManager;
    double  _ppt_delay;
    bool  _ppt_presentComposeRecipientView;
    bool  _ppt_scrollComposeRecipientsView;
    NSDictionary * _preparationOptionsPerAsset;
    PXCMMSendBackSuggestionSource * _sendBackSuggestionSource;
    unsigned long long  _sourceType;
    PXCMMViewModel * _viewModel;
}

@property (nonatomic, readonly) PXCMMActionManager *actionManager;
@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *diagnosticDictionary;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideActionMenu;
@property (nonatomic, readonly) NSString *importSessionID;
@property (nonatomic, readonly) <PXAssetImportStatusManager> *importStatusManager;
@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;
@property (nonatomic, readonly) PXMomentShareStatus *momentShareStatus;
@property (nonatomic, readonly) NSSet *notificationSuppressionContexts;
@property (nonatomic, readonly) PXPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (nonatomic, readonly) PXPeopleSuggestionsDataSourceManager *peopleSuggestionsPreviewDataSourceManager;
@property (nonatomic) double ppt_delay;
@property (nonatomic, readonly) bool ppt_presentComposeRecipientView;
@property (nonatomic, readonly) bool ppt_scrollComposeRecipientsView;
@property (nonatomic, readonly) NSDictionary *preparationOptionsPerAsset;
@property (nonatomic, readonly) PXCMMSendBackSuggestionSource *sendBackSuggestionSource;
@property (nonatomic, readonly) unsigned long long sourceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXCMMViewModel *viewModel;

+ (id)new;

- (void).cxx_destruct;
- (id)actionManager;
- (unsigned long long)activityType;
- (id)dataSourceManager;
- (id)diagnosticDictionary;
- (bool)hideActionMenu;
- (id)importSessionID;
- (id)importStatusManager;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)mediaProvider;
- (id)momentShareStatus;
- (id)momentShareStatusPresentationWithPresentationStyle:(long long)arg1;
- (id)notificationSuppressionContexts;
- (id)peopleSuggestionsDataSourceManager;
- (id)peopleSuggestionsPreviewDataSourceManager;
- (double)ppt_delay;
- (bool)ppt_presentComposeRecipientView;
- (bool)ppt_scrollComposeRecipientsView;
- (id)preparationOptionsPerAsset;
- (id)sendBackSuggestionSource;
- (void)setPpt_delay:(double)arg1;
- (unsigned long long)sourceType;
- (id)viewModel;

@end
