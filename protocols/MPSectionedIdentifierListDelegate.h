
@protocol MPSectionedIdentifierListDelegate <NSObject>

@optional

- (void)sectionedIdentifierList:(MPSectionedIdentifierList *)arg1 dataSourceDidAddItems:(NSArray *)arg2 toSection:(NSString *)arg3;
- (void)sectionedIdentifierList:(MPSectionedIdentifierList *)arg1 dataSourceDidChangeItems:(NSArray *)arg2 inSection:(NSString *)arg3;
- (void)sectionedIdentifierList:(MPSectionedIdentifierList *)arg1 dataSourceDidMoveItems:(NSArray *)arg2 inSection:(NSString *)arg3;
- (void)sectionedIdentifierList:(MPSectionedIdentifierList *)arg1 dataSourceDidRemoveItems:(NSArray *)arg2 fromSection:(NSString *)arg3;
- (void)sectionedIdentifierList:(MPSectionedIdentifierList *)arg1 dataSourceDidUpdateItems:(NSArray *)arg2 inSection:(NSString *)arg3;
- (void)sectionedIdentifierList:(MPSectionedIdentifierList *)arg1 dataSourceDidUpdateSection:(NSString *)arg2;

@end
