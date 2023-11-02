
@interface ATXPBUserNotificationModelScore : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { 
        unsigned int modelVersion : 1; 
        unsigned int score : 1; 
        unsigned int scoreTimestamp : 1; 
    }  _has;
    NSString * _modelId;
    unsigned long long  _modelVersion;
    double  _score;
    NSData * _scoreInfo;
    double  _scoreTimestamp;
    NSString * _scoreUUID;
}

@property (nonatomic, readonly) bool hasModelId;
@property (nonatomic) bool hasModelVersion;
@property (nonatomic) bool hasScore;
@property (nonatomic, readonly) bool hasScoreInfo;
@property (nonatomic) bool hasScoreTimestamp;
@property (nonatomic, readonly) bool hasScoreUUID;
@property (nonatomic, retain) NSString *modelId;
@property (nonatomic) unsigned long long modelVersion;
@property (nonatomic) double score;
@property (nonatomic, retain) NSData *scoreInfo;
@property (nonatomic) double scoreTimestamp;
@property (nonatomic, retain) NSString *scoreUUID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasModelId;
- (bool)hasModelVersion;
- (bool)hasScore;
- (bool)hasScoreInfo;
- (bool)hasScoreTimestamp;
- (bool)hasScoreUUID;
- (unsigned long long)hash;
- (id)initFromJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)modelId;
- (unsigned long long)modelVersion;
- (bool)readFrom:(id)arg1;
- (double)score;
- (id)scoreInfo;
- (double)scoreTimestamp;
- (id)scoreUUID;
- (void)setHasModelVersion:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setHasScoreTimestamp:(bool)arg1;
- (void)setModelId:(id)arg1;
- (void)setModelVersion:(unsigned long long)arg1;
- (void)setScore:(double)arg1;
- (void)setScoreInfo:(id)arg1;
- (void)setScoreTimestamp:(double)arg1;
- (void)setScoreUUID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
