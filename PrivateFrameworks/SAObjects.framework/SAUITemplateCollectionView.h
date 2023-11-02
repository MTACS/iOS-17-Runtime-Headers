
@interface SAUITemplateCollectionView : SAUITemplateBaseItem

@property (nonatomic, copy) NSArray *cells;

+ (id)collectionView;
+ (id)collectionViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)cells;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setCells:(id)arg1;

@end
