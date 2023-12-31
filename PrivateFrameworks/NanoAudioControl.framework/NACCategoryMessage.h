
@interface NACCategoryMessage : PBCodable <NSCopying> {
    NSString * _category;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic, readonly) bool hasCategory;

- (void).cxx_destruct;
- (id)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategory;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)writeTo:(id)arg1;

@end
