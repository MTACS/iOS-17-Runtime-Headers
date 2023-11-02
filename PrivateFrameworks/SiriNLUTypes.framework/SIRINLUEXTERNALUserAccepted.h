
@interface SIRINLUEXTERNALUserAccepted : PBCodable <NSCopying> {
    SIRINLUEXTERNALUUID * _offerId;
    SIRINLUEXTERNALUsoGraph * _reference;
}

@property (nonatomic, readonly) bool hasOfferId;
@property (nonatomic, readonly) bool hasReference;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *offerId;
@property (nonatomic, retain) SIRINLUEXTERNALUsoGraph *reference;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOfferId;
- (bool)hasReference;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)offerId;
- (bool)readFrom:(id)arg1;
- (id)reference;
- (void)setOfferId:(id)arg1;
- (void)setReference:(id)arg1;
- (void)writeTo:(id)arg1;

@end
