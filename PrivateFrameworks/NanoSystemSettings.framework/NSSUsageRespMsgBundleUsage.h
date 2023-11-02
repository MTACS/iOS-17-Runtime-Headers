
@interface NSSUsageRespMsgBundleUsage : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    NSMutableArray * _categories;
    struct { 
        unsigned int purgeable : 1; 
    }  _has;
    NSString * _name;
    bool  _purgeable;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSMutableArray *categories;
@property (nonatomic) bool hasPurgeable;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) bool purgeable;

+ (Class)categoriesType;

- (void).cxx_destruct;
- (void)addCategories:(id)arg1;
- (id)bundleIdentifier;
- (id)categories;
- (id)categoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoriesCount;
- (void)clearCategories;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPurgeable;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)purgeable;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCategories:(id)arg1;
- (void)setHasPurgeable:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPurgeable:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
