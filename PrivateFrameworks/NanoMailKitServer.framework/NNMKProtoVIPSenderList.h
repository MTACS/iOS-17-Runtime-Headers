
@interface NNMKProtoVIPSenderList : PBCodable <NSCopying> {
    NSMutableArray * _vips;
}

@property (nonatomic, retain) NSMutableArray *vips;

+ (id)protoVIPList:(id)arg1;
+ (Class)vipsType;

- (void).cxx_destruct;
- (void)addVips:(id)arg1;
- (void)clearVips;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setVips:(id)arg1;
- (id)vipList;
- (id)vips;
- (id)vipsAtIndex:(unsigned long long)arg1;
- (unsigned long long)vipsCount;
- (void)writeTo:(id)arg1;

@end
