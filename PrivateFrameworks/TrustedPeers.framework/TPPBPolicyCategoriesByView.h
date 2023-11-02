
@interface TPPBPolicyCategoriesByView : PBCodable <NSCopying> {
    NSMutableArray * _categories;
    NSString * _view;
}

@property (nonatomic, retain) NSMutableArray *categories;
@property (nonatomic, readonly) bool hasView;
@property (nonatomic, retain) NSString *view;

+ (id)TPPBPolicyCategoriesByViewWithView:(id)arg1 categories:(id)arg2;
+ (Class)categoriesType;

- (void).cxx_destruct;
- (void)addCategories:(id)arg1;
- (id)categories;
- (id)categoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoriesCount;
- (void)clearCategories;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasView;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategories:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (void)writeTo:(id)arg1;

@end
