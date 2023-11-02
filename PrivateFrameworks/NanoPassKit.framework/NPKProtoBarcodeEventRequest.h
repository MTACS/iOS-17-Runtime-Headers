
@interface NPKProtoBarcodeEventRequest : PBRequest <NSCopying> {
    NSMutableArray * _associatedApplicationIdentifiers;
    NSData * _requestData;
}

@property (nonatomic, retain) NSMutableArray *associatedApplicationIdentifiers;
@property (nonatomic, readonly) bool hasRequestData;
@property (nonatomic, retain) NSData *requestData;

+ (Class)associatedApplicationIdentifiersType;

- (void).cxx_destruct;
- (void)addAssociatedApplicationIdentifiers:(id)arg1;
- (id)associatedApplicationIdentifiers;
- (id)associatedApplicationIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)associatedApplicationIdentifiersCount;
- (void)clearAssociatedApplicationIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequestData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestData;
- (void)setAssociatedApplicationIdentifiers:(id)arg1;
- (void)setRequestData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
