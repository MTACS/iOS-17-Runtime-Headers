
@interface PGGraphBusinessCategoryNodeCollection : PGGraphNodeCollection

@property (nonatomic, readonly) PGGraphBusinessNodeCollection *businessNodes;
@property (readonly) NSSet *categories;

+ (id)businessCategoryNodesForCategories:(id)arg1 inGraph:(id)arg2;
+ (id)businessCategoryNodesForCategory:(id)arg1 inGraph:(id)arg2;
+ (Class)nodeClass;

- (id)businessNodes;
- (id)categories;

@end
