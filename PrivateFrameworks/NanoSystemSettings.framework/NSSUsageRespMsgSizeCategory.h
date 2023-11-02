
@interface NSSUsageRespMsgSizeCategory : PBCodable <NSCopying> {
    NSString * _categoryIdentifier;
    NSString * _name;
    NSSUsageSize * _size;
}

@property (nonatomic, retain) NSString *categoryIdentifier;
@property (nonatomic, readonly) bool hasCategoryIdentifier;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasSize;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSSUsageSize *size;

- (void).cxx_destruct;
- (id)categoryIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategoryIdentifier;
- (bool)hasName;
- (bool)hasSize;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setCategoryIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSize:(id)arg1;
- (id)size;
- (void)writeTo:(id)arg1;

@end
