
@interface EDPETBatchedWrapper : PBCodable <NSCopying> {
    EDPETQuotaReachedEvent * _quotaEvent;
    NSData * _rawData;
    EDPETSubmittedEvent * _submittedEvent;
}

@property (nonatomic, readonly) bool hasQuotaEvent;
@property (nonatomic, readonly) bool hasRawData;
@property (nonatomic, readonly) bool hasSubmittedEvent;
@property (nonatomic, retain) EDPETQuotaReachedEvent *quotaEvent;
@property (nonatomic, retain) NSData *rawData;
@property (nonatomic, retain) EDPETSubmittedEvent *submittedEvent;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasQuotaEvent;
- (bool)hasRawData;
- (bool)hasSubmittedEvent;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)quotaEvent;
- (id)rawData;
- (bool)readFrom:(id)arg1;
- (void)setQuotaEvent:(id)arg1;
- (void)setRawData:(id)arg1;
- (void)setSubmittedEvent:(id)arg1;
- (id)submittedEvent;
- (void)writeTo:(id)arg1;

@end
