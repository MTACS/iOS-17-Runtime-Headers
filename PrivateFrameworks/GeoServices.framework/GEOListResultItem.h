
@interface GEOListResultItem : PBCodable <NSCopying> {
    unsigned long long  _businessId;
    bool  _eventuallyVisible;
    struct { 
        unsigned int has_businessId : 1; 
        unsigned int has_latency : 1; 
        unsigned int has_resultType : 1; 
        unsigned int has_tappedCount : 1; 
        unsigned int has_eventuallyVisible : 1; 
        unsigned int has_initiallyVisible : 1; 
    }  _flags;
    bool  _initiallyVisible;
    long long  _latency;
    int  _resultType;
    int  _tappedCount;
}

@property (nonatomic) unsigned long long businessId;
@property (nonatomic) bool eventuallyVisible;
@property (nonatomic) bool hasBusinessId;
@property (nonatomic) bool hasEventuallyVisible;
@property (nonatomic) bool hasInitiallyVisible;
@property (nonatomic) bool hasLatency;
@property (nonatomic) bool hasResultType;
@property (nonatomic) bool hasTappedCount;
@property (nonatomic) bool initiallyVisible;
@property (nonatomic) long long latency;
@property (nonatomic) int resultType;
@property (nonatomic) int tappedCount;

+ (bool)isValid:(id)arg1;

- (int)StringAsResultType:(id)arg1;
- (unsigned long long)businessId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)eventuallyVisible;
- (bool)hasBusinessId;
- (bool)hasEventuallyVisible;
- (bool)hasInitiallyVisible;
- (bool)hasLatency;
- (bool)hasResultType;
- (bool)hasTappedCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)initiallyVisible;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (long long)latency;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)resultType;
- (id)resultTypeAsString:(int)arg1;
- (void)setBusinessId:(unsigned long long)arg1;
- (void)setEventuallyVisible:(bool)arg1;
- (void)setHasBusinessId:(bool)arg1;
- (void)setHasEventuallyVisible:(bool)arg1;
- (void)setHasInitiallyVisible:(bool)arg1;
- (void)setHasLatency:(bool)arg1;
- (void)setHasResultType:(bool)arg1;
- (void)setHasTappedCount:(bool)arg1;
- (void)setInitiallyVisible:(bool)arg1;
- (void)setLatency:(long long)arg1;
- (void)setResultType:(int)arg1;
- (void)setTappedCount:(int)arg1;
- (int)tappedCount;
- (void)writeTo:(id)arg1;

@end
