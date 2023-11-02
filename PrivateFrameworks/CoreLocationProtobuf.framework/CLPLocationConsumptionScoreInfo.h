
@interface CLPLocationConsumptionScoreInfo : PBCodable <NSCopying> {
    NSString * _clientKey;
    struct { 
        unsigned int startTime : 1; 
        unsigned int stopTime : 1; 
        unsigned int score : 1; 
    }  _has;
    int  _score;
    double  _startTime;
    double  _stopTime;
}

@property (nonatomic, retain) NSString *clientKey;
@property (nonatomic, readonly) bool hasClientKey;
@property (nonatomic) bool hasScore;
@property (nonatomic) bool hasStartTime;
@property (nonatomic) bool hasStopTime;
@property (nonatomic) int score;
@property (nonatomic) double startTime;
@property (nonatomic) double stopTime;

- (void).cxx_destruct;
- (id)clientKey;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientKey;
- (bool)hasScore;
- (bool)hasStartTime;
- (bool)hasStopTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)score;
- (void)setClientKey:(id)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasStopTime:(bool)arg1;
- (void)setScore:(int)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStopTime:(double)arg1;
- (double)startTime;
- (double)stopTime;
- (void)writeTo:(id)arg1;

@end
