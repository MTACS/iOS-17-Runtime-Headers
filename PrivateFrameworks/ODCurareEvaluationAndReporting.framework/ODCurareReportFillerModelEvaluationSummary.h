
@interface ODCurareReportFillerModelEvaluationSummary : PBCodable <NSCopying> {
    ODCurareReportFillerDataSet * _dataUsedToEvaluateModel;
    NSString * _evaluationDate;
    NSMutableArray * _modelEvaluationResults;
    NSString * _modelName;
}

@property (nonatomic, retain) ODCurareReportFillerDataSet *dataUsedToEvaluateModel;
@property (nonatomic, retain) NSString *evaluationDate;
@property (nonatomic, readonly) bool hasDataUsedToEvaluateModel;
@property (nonatomic, retain) NSMutableArray *modelEvaluationResults;
@property (nonatomic, retain) NSString *modelName;

+ (Class)modelEvaluationResultsType;

- (void).cxx_destruct;
- (void)addModelEvaluationResults:(id)arg1;
- (void)clearModelEvaluationResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataUsedToEvaluateModel;
- (id)description;
- (id)dictionaryRepresentation;
- (id)evaluationDate;
- (bool)hasDataUsedToEvaluateModel;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modelEvaluationResults;
- (id)modelEvaluationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)modelEvaluationResultsCount;
- (id)modelName;
- (bool)readFrom:(id)arg1;
- (void)setDataUsedToEvaluateModel:(id)arg1;
- (void)setEvaluationDate:(id)arg1;
- (void)setModelEvaluationResults:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
