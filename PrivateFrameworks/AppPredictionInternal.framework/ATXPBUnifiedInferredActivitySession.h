
@interface ATXPBUnifiedInferredActivitySession : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    double  _confidence;
    double  _endTime;
    struct { 
        unsigned int confidence : 1; 
        unsigned int endTime : 1; 
        unsigned int inferredActivity : 1; 
        unsigned int startTime : 1; 
    }  _has;
    long long  _inferredActivity;
    NSString * _source;
    double  _startTime;
}

@property (nonatomic) double confidence;
@property (nonatomic) double endTime;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasEndTime;
@property (nonatomic) bool hasInferredActivity;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic) bool hasStartTime;
@property (nonatomic) long long inferredActivity;
@property (nonatomic, retain) NSString *source;
@property (nonatomic) double startTime;

- (void).cxx_destruct;
- (double)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endTime;
- (bool)hasConfidence;
- (bool)hasEndTime;
- (bool)hasInferredActivity;
- (bool)hasSource;
- (bool)hasStartTime;
- (unsigned long long)hash;
- (long long)inferredActivity;
- (id)initFromJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setEndTime:(double)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasEndTime:(bool)arg1;
- (void)setHasInferredActivity:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setInferredActivity:(long long)arg1;
- (void)setSource:(id)arg1;
- (void)setStartTime:(double)arg1;
- (id)source;
- (double)startTime;
- (void)writeTo:(id)arg1;

@end
