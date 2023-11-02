
@interface WFChooseFromListArrayContentItem : WFContentItem

@property (nonatomic, readonly) NSArray *items;

+ (id)itemWithItems:(id)arg1 named:(id)arg2;
+ (id)itemWithObjects:(id)arg1 named:(id)arg2;
+ (id)ownedTypes;

- (id)allowedClassesForDecodingInternalRepresentations;
- (bool)getListSubtitle:(id /* block */)arg1;
- (id)items;

@end
