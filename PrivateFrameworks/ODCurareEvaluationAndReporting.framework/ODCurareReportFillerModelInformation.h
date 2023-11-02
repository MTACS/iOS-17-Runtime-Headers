
@interface ODCurareReportFillerModelInformation : PBCodable <NSCopying> {
    ODCurareReportFillerDataSet * _dataUsedToPersonalizeModel;
    bool  _isDefaultModel;
    NSString * _modelCreationDate;
    ODCurareReportFillerModelHyperparameters * _modelHyperparameters;
    NSString * _modelName;
}

@property (nonatomic, retain) ODCurareReportFillerDataSet *dataUsedToPersonalizeModel;
@property (nonatomic, readonly) bool hasDataUsedToPersonalizeModel;
@property (nonatomic, readonly) bool hasModelCreationDate;
@property (nonatomic, readonly) bool hasModelHyperparameters;
@property (nonatomic) bool isDefaultModel;
@property (nonatomic, retain) NSString *modelCreationDate;
@property (nonatomic, retain) ODCurareReportFillerModelHyperparameters *modelHyperparameters;
@property (nonatomic, retain) NSString *modelName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataUsedToPersonalizeModel;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataUsedToPersonalizeModel;
- (bool)hasModelCreationDate;
- (bool)hasModelHyperparameters;
- (unsigned long long)hash;
- (bool)isDefaultModel;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modelCreationDate;
- (id)modelHyperparameters;
- (id)modelName;
- (bool)readFrom:(id)arg1;
- (void)setDataUsedToPersonalizeModel:(id)arg1;
- (void)setIsDefaultModel:(bool)arg1;
- (void)setModelCreationDate:(id)arg1;
- (void)setModelHyperparameters:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
