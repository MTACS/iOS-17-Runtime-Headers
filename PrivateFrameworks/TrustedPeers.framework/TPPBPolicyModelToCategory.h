
@interface TPPBPolicyModelToCategory : PBCodable <NSCopying> {
    NSString * _category;
    NSString * _prefix;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic, readonly) bool hasPrefix;
@property (nonatomic, retain) NSString *prefix;

+ (id)TPPBPolicyModelToCategoryWithPrefix:(id)arg1 category:(id)arg2;

- (void).cxx_destruct;
- (id)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategory;
- (bool)hasPrefix;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)prefix;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)writeTo:(id)arg1;

@end
