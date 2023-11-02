
@interface NSSUsageRespMsgBundleUsageCategory : PBCodable <NSCopying> {
    NSString * _name;
    unsigned long long  _usageInBytes;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long usageInBytes;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUsageInBytes:(unsigned long long)arg1;
- (unsigned long long)usageInBytes;
- (void)writeTo:(id)arg1;

@end
