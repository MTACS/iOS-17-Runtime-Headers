
@interface ADAttributionResponse : PBCodable <NSCopying> {
    NSMutableArray * _versionedAttributionDetails;
}

@property (nonatomic, retain) NSMutableArray *versionedAttributionDetails;

+ (id)options;
+ (Class)versionedAttributionDetailsType;

- (void).cxx_destruct;
- (void)addVersionedAttributionDetails:(id)arg1;
- (void)clearVersionedAttributionDetails;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setVersionedAttributionDetails:(id)arg1;
- (id)versionedAttributionDetails;
- (id)versionedAttributionDetailsAtIndex:(unsigned long long)arg1;
- (unsigned long long)versionedAttributionDetailsCount;
- (void)writeTo:(id)arg1;

@end
