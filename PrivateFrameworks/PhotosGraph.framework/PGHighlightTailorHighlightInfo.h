
@interface PGHighlightTailorHighlightInfo : NSObject {
    NSArray * _childHighlights;
    CLSInvestigationPhotoKitFeeder * _feeder;
    <PGHighlightModel> * _highlight;
    PGGraphHighlightNode * _highlightNode;
    PGHighlightTailorContext * _highlightTailorContext;
    NSString * _keyAssetPrivateUUID;
    NSString * _keyAssetSharedUUID;
    NSObject<OS_os_log> * _loggingConnection;
    NSSet * _meaningLabels;
    NSDictionary * _meaningLabelsByChildHighlightUUID;
    NSArray * _mixedSummarizedFeatures;
    PHFetchResult * _momentFetchResult;
    NSSet * _momentNodes;
    unsigned long long  _numberOfExtendedAssets;
    bool  _petIsPresent;
    NSArray * _privateSummarizedFeatures;
    double  _promotionScore;
    NSArray * _sharedSummarizedFeatures;
    NSArray * _uuidsOfEligibleAssets;
}

@property (nonatomic, retain) NSArray *childHighlights;
@property (nonatomic, readonly) CLSInvestigationPhotoKitFeeder *feeder;
@property (nonatomic, readonly) <PGHighlightModel> *highlight;
@property (nonatomic, readonly) PGGraphHighlightNode *highlightNode;
@property (readonly) PGHighlightTailorContext *highlightTailorContext;
@property (nonatomic, copy) NSString *keyAssetPrivateUUID;
@property (nonatomic, copy) NSString *keyAssetSharedUUID;
@property (nonatomic, retain) NSSet *meaningLabels;
@property (nonatomic, readonly) NSDictionary *meaningLabelsByChildHighlightUUID;
@property (nonatomic, readonly) NSArray *mixedSummarizedFeatures;
@property (nonatomic, readonly) PHFetchResult *momentFetchResult;
@property (nonatomic, readonly) NSSet *momentNodes;
@property (nonatomic) unsigned long long numberOfExtendedAssets;
@property (nonatomic, readonly) bool petIsPresent;
@property (nonatomic, readonly) NSArray *privateSummarizedFeatures;
@property (nonatomic) double promotionScore;
@property (nonatomic, readonly) NSArray *sharedSummarizedFeatures;
@property (nonatomic, retain) NSArray *uuidsOfEligibleAssets;

- (void).cxx_destruct;
- (id)assetsForSharingFilter:(unsigned short)arg1;
- (id)childHighlights;
- (id)description;
- (id)feeder;
- (id)generateSortedSummarizedFeaturesForSharingFilter:(unsigned short)arg1 graph:(id)arg2 featureSummaryGenerator:(id)arg3;
- (id)highlight;
- (id)highlightNode;
- (id)highlightTailorContext;
- (id)initForTestingWithHighlight:(id)arg1;
- (id)initWithHighlight:(id)arg1 graph:(id)arg2 highlightTailorContext:(id)arg3;
- (id)initWithHighlight:(id)arg1 loggingConnection:(id)arg2;
- (id)keyAssetPrivateUUID;
- (id)keyAssetSharedUUID;
- (id)meaningLabels;
- (id)meaningLabelsByChildHighlightUUID;
- (id)mixedSummarizedFeatures;
- (id)momentFetchResult;
- (id)momentNodes;
- (unsigned long long)numberOfExtendedAssets;
- (bool)petIsPresent;
- (id)privateSummarizedFeatures;
- (double)promotionScore;
- (void)setChildHighlights:(id)arg1;
- (void)setHighlightSummarizedFeaturesWithGraph:(id)arg1;
- (void)setKeyAssetPrivateUUID:(id)arg1;
- (void)setKeyAssetSharedUUID:(id)arg1;
- (void)setMeaningLabels:(id)arg1;
- (void)setNumberOfExtendedAssets:(unsigned long long)arg1;
- (void)setPromotionScore:(double)arg1;
- (void)setUuidsOfEligibleAssets:(id)arg1;
- (id)sharedSummarizedFeatures;
- (id)uuidsOfEligibleAssets;
- (id)uuidsOfRequiredAssetsForSharingFilter:(unsigned short)arg1;

@end
