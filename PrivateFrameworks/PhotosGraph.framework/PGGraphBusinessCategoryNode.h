
@interface PGGraphBusinessCategoryNode : PGGraphPropertylessNode <PGGraphLocalizable> {
    NSString * _label;
}

@property (nonatomic, readonly) PGGraphBusinessCategoryNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedName;
@property (readonly) Class superclass;

+ (id)businessOfCategory;
+ (id)filter;
+ (id)filterWithCategories:(id)arg1;
+ (id)filterWithCategory:(id)arg1;

- (void).cxx_destruct;
- (id)collection;
- (unsigned short)domain;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)label;
- (id)localizedName;

@end
