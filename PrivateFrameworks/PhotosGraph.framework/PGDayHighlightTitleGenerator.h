
@interface PGDayHighlightTitleGenerator : NSObject <PGFeatureSummaryTitleGeneratorProtocol> {
    NSObject<OS_os_log> * _loggingConnection;
    PGGraphMomentNodeCollection * _momentNodes;
    NSArray * _summarizedFeatures;
    PGTitleGenerationContext * _titleGenerationContext;
    PGTitleTuple * _titleTuple;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PGTitleTuple *titleTuple;

- (void).cxx_destruct;
- (id)dayHighlightMeaningLabels;
- (id)initWithSummarizedFeatures:(id)arg1 momentNodes:(id)arg2 titleGenerationContext:(id)arg3 loggingConnection:(id)arg4;
- (id)localizedTitleStringForSortedSummarizedFeatures:(id)arg1;
- (id)localizedTitleStringFromBusinessFeature:(id)arg1;
- (id)localizedTitleStringFromDistrictNode:(id)arg1 districtName:(id)arg2;
- (id)localizedTitleStringFromHolidayDateFeature:(id)arg1;
- (id)localizedTitleStringFromLocationFeature:(id)arg1;
- (id)localizedTitleStringFromMeaningFeature:(id)arg1;
- (id)localizedTitleStringFromPublicEventFeature:(id)arg1;
- (id)nameFromLocationFeature:(id)arg1;
- (id)titleTuple;

@end
