
@interface NTPBTagListRecord : PBCodable <NSCopying> {
    NTPBRecordBase * _base;
    NSMutableArray * _tagIDs;
}

@property (nonatomic, retain) NTPBRecordBase *base;
@property (nonatomic, readonly) bool hasBase;
@property (nonatomic, retain) NSMutableArray *tagIDs;

+ (Class)tagIDsType;

- (void)addTagIDs:(id)arg1;
- (id)base;
- (void)clearTagIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBase;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setTagIDs:(id)arg1;
- (id)tagIDs;
- (id)tagIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)tagIDsCount;
- (void)writeTo:(id)arg1;

@end
