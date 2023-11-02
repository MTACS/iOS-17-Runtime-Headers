
@interface NTPBJSONRecord : PBCodable <NSCopying> {
    NTPBRecordBase * _base;
    NSData * _json;
}

@property (nonatomic, retain) NTPBRecordBase *base;
@property (nonatomic, readonly) bool hasBase;
@property (nonatomic, readonly) bool hasJson;
@property (nonatomic, retain) NSData *json;

- (id)base;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBase;
- (bool)hasJson;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)json;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setJson:(id)arg1;
- (void)writeTo:(id)arg1;

@end
