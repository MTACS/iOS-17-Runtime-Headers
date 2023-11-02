
@interface AWDProactiveAppData : PBCodable <NSCopying> {
    NSString * _bundleId;
    bool  _engagedApp;
    struct { 
        unsigned int score : 1; 
        unsigned int timestamp : 1; 
        unsigned int engagedApp : 1; 
    }  _has;
    double  _score;
    NSString * _sessionId;
    AWDProactiveAppPredictionSubscores * _subscores;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) bool engagedApp;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic) bool hasEngagedApp;
@property (nonatomic) bool hasScore;
@property (nonatomic, readonly) bool hasSessionId;
@property (nonatomic, readonly) bool hasSubscores;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) double score;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic, retain) AWDProactiveAppPredictionSubscores *subscores;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)bundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)engagedApp;
- (bool)hasBundleId;
- (bool)hasEngagedApp;
- (bool)hasScore;
- (bool)hasSessionId;
- (bool)hasSubscores;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)score;
- (id)sessionId;
- (void)setBundleId:(id)arg1;
- (void)setEngagedApp:(bool)arg1;
- (void)setHasEngagedApp:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setScore:(double)arg1;
- (void)setSessionId:(id)arg1;
- (void)setSubscores:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)subscores;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
