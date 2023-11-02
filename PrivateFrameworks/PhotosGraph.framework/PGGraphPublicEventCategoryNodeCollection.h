
@interface PGGraphPublicEventCategoryNodeCollection : PGGraphNodeCollection

@property (readonly) NSSet *categories;
@property (nonatomic, readonly) PGGraphPublicEventNodeCollection *publicEventNodes;

+ (Class)nodeClass;
+ (id)publicEventCategoryNodesForCategories:(id)arg1 inGraph:(id)arg2;
+ (id)publicEventCategoryNodesForCategory:(id)arg1 inGraph:(id)arg2;

- (id)categories;
- (id)publicEventNodes;

@end
