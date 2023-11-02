
@interface PXCMMPhotoKitSession : PXCMMSession {
    PXPhotoKitImportStatusManager * _importStatusManager;
    PHMomentShare * _momentShare;
    PHMomentShare * _originatingMomentShare;
    NSString * _photoKitImportSessionID;
    PXPhotoKitMomentShareStatus * _photoKitMomentShareStatus;
    PHSuggestion * _suggestion;
}

@property (nonatomic, readonly) PXPhotoKitAssetsDataSourceManager *dataSourceManager;
@property (nonatomic, readonly) PHMomentShare *momentShare;
@property (nonatomic, readonly) PHMomentShare *originatingMomentShare;
@property (nonatomic, readonly) PHSuggestion *suggestion;

- (void).cxx_destruct;
- (id)description;
- (id)diagnosticDictionary;
- (id)importSessionID;
- (id)importStatusManager;
- (id)initWithContext:(id)arg1;
- (id)initWithPhotoKitContext:(id)arg1;
- (id)momentShare;
- (id)momentShareStatus;
- (id)notificationSuppressionContexts;
- (id)originatingMomentShare;
- (id)suggestion;

@end
