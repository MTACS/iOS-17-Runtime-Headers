
@interface CLPIonosphereCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray * _ionoDatas;
    CLPMeta * _meta;
}

@property (nonatomic, readonly) bool hasMeta;
@property (nonatomic, retain) NSMutableArray *ionoDatas;
@property (nonatomic, retain) CLPMeta *meta;

+ (Class)ionoDataType;

- (void).cxx_destruct;
- (void)addIonoData:(id)arg1;
- (void)clearIonoDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMeta;
- (unsigned long long)hash;
- (id)ionoDataAtIndex:(unsigned long long)arg1;
- (id)ionoDatas;
- (unsigned long long)ionoDatasCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)meta;
- (bool)readFrom:(id)arg1;
- (void)setIonoDatas:(id)arg1;
- (void)setMeta:(id)arg1;
- (void)writeTo:(id)arg1;

@end
