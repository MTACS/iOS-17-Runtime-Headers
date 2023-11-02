
@interface ACHCodableAchievementProgressUpdate : PBCodable <NSCopying> {
    NSString * _goalQuantityUnit;
    double  _goalQuantityValue;
    struct { 
        unsigned int goalQuantityValue : 1; 
        unsigned int progressQuantityValue : 1; 
    }  _has;
    NSString * _progressQuantityUnit;
    double  _progressQuantityValue;
    NSString * _templateUniqueName;
}

@property (nonatomic, retain) NSString *goalQuantityUnit;
@property (nonatomic) double goalQuantityValue;
@property (nonatomic, readonly) bool hasGoalQuantityUnit;
@property (nonatomic) bool hasGoalQuantityValue;
@property (nonatomic, readonly) bool hasProgressQuantityUnit;
@property (nonatomic) bool hasProgressQuantityValue;
@property (nonatomic, readonly) bool hasTemplateUniqueName;
@property (nonatomic, retain) NSString *progressQuantityUnit;
@property (nonatomic) double progressQuantityValue;
@property (nonatomic, retain) NSString *templateUniqueName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)goalQuantityUnit;
- (double)goalQuantityValue;
- (bool)hasGoalQuantityUnit;
- (bool)hasGoalQuantityValue;
- (bool)hasProgressQuantityUnit;
- (bool)hasProgressQuantityValue;
- (bool)hasTemplateUniqueName;
- (unsigned long long)hash;
- (id)initWithSerializedData:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)progressQuantityUnit;
- (double)progressQuantityValue;
- (bool)readFrom:(id)arg1;
- (void)setGoalQuantityUnit:(id)arg1;
- (void)setGoalQuantityValue:(double)arg1;
- (void)setHasGoalQuantityValue:(bool)arg1;
- (void)setHasProgressQuantityValue:(bool)arg1;
- (void)setProgressQuantityUnit:(id)arg1;
- (void)setProgressQuantityValue:(double)arg1;
- (void)setTemplateUniqueName:(id)arg1;
- (id)templateUniqueName;
- (void)writeTo:(id)arg1;

@end
