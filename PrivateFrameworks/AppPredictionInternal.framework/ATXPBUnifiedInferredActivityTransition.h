
@interface ATXPBUnifiedInferredActivityTransition : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    double  _confidence;
    struct { 
        unsigned int confidence : 1; 
        unsigned int inferredActivity : 1; 
        unsigned int transitionTime : 1; 
        unsigned int isActivityStart : 1; 
    }  _has;
    long long  _inferredActivity;
    bool  _isActivityStart;
    NSString * _source;
    double  _transitionTime;
}

@property (nonatomic) double confidence;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasInferredActivity;
@property (nonatomic) bool hasIsActivityStart;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic) bool hasTransitionTime;
@property (nonatomic) long long inferredActivity;
@property (nonatomic) bool isActivityStart;
@property (nonatomic, retain) NSString *source;
@property (nonatomic) double transitionTime;

- (void).cxx_destruct;
- (double)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfidence;
- (bool)hasInferredActivity;
- (bool)hasIsActivityStart;
- (bool)hasSource;
- (bool)hasTransitionTime;
- (unsigned long long)hash;
- (long long)inferredActivity;
- (id)initFromJSON:(id)arg1;
- (bool)isActivityStart;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasInferredActivity:(bool)arg1;
- (void)setHasIsActivityStart:(bool)arg1;
- (void)setHasTransitionTime:(bool)arg1;
- (void)setInferredActivity:(long long)arg1;
- (void)setIsActivityStart:(bool)arg1;
- (void)setSource:(id)arg1;
- (void)setTransitionTime:(double)arg1;
- (id)source;
- (double)transitionTime;
- (void)writeTo:(id)arg1;

@end
