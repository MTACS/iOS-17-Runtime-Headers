
@protocol NADiffableItemGroup <NSObject>

@required

- (NSArray *)diffableItems;
- (NSString *)groupIdentifier;

@end
