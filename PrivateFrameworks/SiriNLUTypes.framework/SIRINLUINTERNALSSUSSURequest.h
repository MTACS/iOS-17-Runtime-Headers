
@interface SIRINLUINTERNALSSUSSURequest : PBRequest <NSCopying> {
    SIRINLUEXTERNALUUID * _asrId;
    NSString * _locale;
    NSMutableArray * _matchingSpans;
    SIRINLUEXTERNALRequestID * _nluRequestId;
    NSMutableArray * _salientEntities;
    NSString * _utterance;
}

@property (nonatomic, retain) SIRINLUEXTERNALUUID *asrId;
@property (nonatomic, readonly) bool hasAsrId;
@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic, readonly) bool hasNluRequestId;
@property (nonatomic, readonly) bool hasUtterance;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, retain) NSMutableArray *matchingSpans;
@property (nonatomic, retain) SIRINLUEXTERNALRequestID *nluRequestId;
@property (nonatomic, retain) NSMutableArray *salientEntities;
@property (nonatomic, retain) NSString *utterance;

+ (Class)matchingSpansType;
+ (Class)salientEntitiesType;

- (void).cxx_destruct;
- (void)addMatchingSpans:(id)arg1;
- (void)addSalientEntities:(id)arg1;
- (id)asrId;
- (void)clearMatchingSpans;
- (void)clearSalientEntities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAsrId;
- (bool)hasLocale;
- (bool)hasNluRequestId;
- (bool)hasUtterance;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (id)matchingSpans;
- (id)matchingSpansAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchingSpansCount;
- (void)mergeFrom:(id)arg1;
- (id)nluRequestId;
- (bool)readFrom:(id)arg1;
- (id)salientEntities;
- (id)salientEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)salientEntitiesCount;
- (void)setAsrId:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setMatchingSpans:(id)arg1;
- (void)setNluRequestId:(id)arg1;
- (void)setSalientEntities:(id)arg1;
- (void)setUtterance:(id)arg1;
- (id)utterance;
- (void)writeTo:(id)arg1;

@end
