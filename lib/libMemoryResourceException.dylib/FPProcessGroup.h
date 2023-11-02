
@interface FPProcessGroup : FPProcessGroupMinimal <NSCopying> {
    NSDictionary * _categories;
    unsigned int  _categoriesRefcount;
    NSMutableSet * _objects;
}

@property (nonatomic, retain) NSDictionary *categories;
@property (nonatomic) unsigned int categoriesRefcount;
@property (nonatomic, retain) NSMutableSet *objects;

- (void).cxx_destruct;
- (void)addProcess:(id)arg1;
- (id)categories;
- (unsigned int)categoriesRefcount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCategories:(id)arg1;
- (void)setCategoriesRefcount:(unsigned int)arg1;
- (void)setObjects:(id)arg1;

@end
