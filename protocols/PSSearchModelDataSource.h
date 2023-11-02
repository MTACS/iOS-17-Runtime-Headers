
@protocol PSSearchModelDataSource <NSObject>

@required

- (NSArray *)rootSpecifiersForSearchModel:(PSSearchModel *)arg1;

@optional

- (Class)rootSearchControllerClassForSearchModel:(PSSearchModel *)arg1;

@end
