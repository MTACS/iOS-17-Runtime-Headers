
@interface ODCurareReportFillerReport : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    bool  _frameworkFailure;
    NSMutableArray * _metadataLists;
    NSMutableArray * _modelEvaluationSummaries;
    NSMutableArray * _modelInformationLists;
    NSMutableArray * _personalizationEvaluationSummaries;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) bool frameworkFailure;
@property (nonatomic, retain) NSMutableArray *metadataLists;
@property (nonatomic, retain) NSMutableArray *modelEvaluationSummaries;
@property (nonatomic, retain) NSMutableArray *modelInformationLists;
@property (nonatomic, retain) NSMutableArray *personalizationEvaluationSummaries;

+ (Class)metadataListType;
+ (Class)modelEvaluationSummariesType;
+ (Class)modelInformationListType;
+ (Class)personalizationEvaluationSummariesType;

- (void).cxx_destruct;
- (void)addMetadataList:(id)arg1;
- (void)addModelEvaluationSummaries:(id)arg1;
- (void)addModelInformationList:(id)arg1;
- (void)addPersonalizationEvaluationSummaries:(id)arg1;
- (id)bundleIdentifier;
- (void)clearMetadataLists;
- (void)clearModelEvaluationSummaries;
- (void)clearModelInformationLists;
- (void)clearPersonalizationEvaluationSummaries;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)frameworkFailure;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadataListAtIndex:(unsigned long long)arg1;
- (id)metadataLists;
- (unsigned long long)metadataListsCount;
- (id)modelEvaluationSummaries;
- (id)modelEvaluationSummariesAtIndex:(unsigned long long)arg1;
- (unsigned long long)modelEvaluationSummariesCount;
- (id)modelInformationListAtIndex:(unsigned long long)arg1;
- (id)modelInformationLists;
- (unsigned long long)modelInformationListsCount;
- (id)personalizationEvaluationSummaries;
- (id)personalizationEvaluationSummariesAtIndex:(unsigned long long)arg1;
- (unsigned long long)personalizationEvaluationSummariesCount;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setFrameworkFailure:(bool)arg1;
- (void)setMetadataLists:(id)arg1;
- (void)setModelEvaluationSummaries:(id)arg1;
- (void)setModelInformationLists:(id)arg1;
- (void)setPersonalizationEvaluationSummaries:(id)arg1;
- (void)writeTo:(id)arg1;

@end
