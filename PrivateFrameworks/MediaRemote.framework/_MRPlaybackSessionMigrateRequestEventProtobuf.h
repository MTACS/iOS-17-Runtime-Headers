
@interface _MRPlaybackSessionMigrateRequestEventProtobuf : PBCodable <NSCopying> {
    double  _duration;
    double  _endTimestamp;
    long long  _errorCode;
    NSString * _errorDescription;
    struct { 
        unsigned int duration : 1; 
        unsigned int endTimestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int startTimestamp : 1; 
    }  _has;
    NSString * _name;
    double  _startTimestamp;
}

@property (nonatomic) double duration;
@property (nonatomic) double endTimestamp;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic) long long errorCode;
@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasEndTimestamp;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDescription;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasStartTimestamp;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) double startTimestamp;

- (void).cxx_destruct;
- (double)calculatedDuration;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (double)endTimestamp;
- (id)error;
- (long long)errorCode;
- (id)errorDescription;
- (bool)hasDuration;
- (bool)hasEndTimestamp;
- (bool)hasErrorCode;
- (bool)hasErrorDescription;
- (bool)hasName;
- (bool)hasStartTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setEndTimestamp:(double)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasEndTimestamp:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasStartTimestamp:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setStartTimestamp:(double)arg1;
- (double)startTimestamp;
- (void)writeTo:(id)arg1;

@end
