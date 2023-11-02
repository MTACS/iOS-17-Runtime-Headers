
@interface FedStatsCategoricalType : FedStatsBoundedULongType {
    NSArray * _categories;
    FedStatsSQLiteCategoryDatabase * _categoryFile;
    NSDictionary * _categoryMap;
    unsigned long long  _version;
}

@property (nonatomic, readonly, copy) NSArray *categories;
@property (nonatomic, readonly, copy) FedStatsSQLiteCategoryDatabase *categoryFile;
@property (nonatomic, readonly, copy) NSDictionary *categoryMap;
@property (nonatomic, readonly) unsigned long long version;

+ (id)createFromDict:(id)arg1 possibleError:(id*)arg2;

- (void).cxx_destruct;
- (id)categories;
- (id)categoryFile;
- (id)categoryMap;
- (long long)dataType;
- (id)decodeFromIndex:(id)arg1 possibleError:(id*)arg2;
- (id)encodeToIndex:(id)arg1 possibleError:(id*)arg2;
- (id)initWithCategories:(id)arg1;
- (id)initWithCategoryFile:(id)arg1;
- (id)initWithCategoryMap:(id)arg1 categories:(id)arg2;
- (id)kOutOfCategories;
- (id)sampleForIndex:(unsigned long long)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;

@end
