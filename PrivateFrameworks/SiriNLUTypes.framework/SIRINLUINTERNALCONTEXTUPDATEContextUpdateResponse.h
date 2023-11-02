
@interface SIRINLUINTERNALCONTEXTUPDATEContextUpdateResponse : PBCodable <NSCopying> {
    NSMutableArray * _reformedTurnInputBundles;
    SIRINLUEXTERNALUUID * _requestId;
}

@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, retain) NSMutableArray *reformedTurnInputBundles;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *requestId;

+ (Class)reformedTurnInputBundlesType;

- (void).cxx_destruct;
- (void)addReformedTurnInputBundles:(id)arg1;
- (void)clearReformedTurnInputBundles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequestId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)reformedTurnInputBundles;
- (id)reformedTurnInputBundlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)reformedTurnInputBundlesCount;
- (id)requestId;
- (void)setReformedTurnInputBundles:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
