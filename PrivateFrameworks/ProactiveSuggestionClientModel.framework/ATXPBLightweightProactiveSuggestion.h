
@interface ATXPBLightweightProactiveSuggestion : PBCodable <NSCopying> {
    NSString * _executableIdentifier;
    NSString * _executableType;
    struct { 
        unsigned int predictionReasons : 1; 
    }  _has;
    unsigned long long  _predictionReasons;
    ATXPBProactiveSuggestionScoreSpecification * _scoreSpecification;
}

@property (nonatomic, retain) NSString *executableIdentifier;
@property (nonatomic, retain) NSString *executableType;
@property (nonatomic, readonly) bool hasExecutableIdentifier;
@property (nonatomic, readonly) bool hasExecutableType;
@property (nonatomic) bool hasPredictionReasons;
@property (nonatomic, readonly) bool hasScoreSpecification;
@property (nonatomic) unsigned long long predictionReasons;
@property (nonatomic, retain) ATXPBProactiveSuggestionScoreSpecification *scoreSpecification;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)executableIdentifier;
- (id)executableType;
- (bool)hasExecutableIdentifier;
- (bool)hasExecutableType;
- (bool)hasPredictionReasons;
- (bool)hasScoreSpecification;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)predictionReasons;
- (bool)readFrom:(id)arg1;
- (id)scoreSpecification;
- (void)setExecutableIdentifier:(id)arg1;
- (void)setExecutableType:(id)arg1;
- (void)setHasPredictionReasons:(bool)arg1;
- (void)setPredictionReasons:(unsigned long long)arg1;
- (void)setScoreSpecification:(id)arg1;
- (void)writeTo:(id)arg1;

@end
