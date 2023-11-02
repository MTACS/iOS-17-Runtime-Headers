
@protocol CSItemDestination <NSObject>

@required

- (void)addOrUpdateItem:(CSAdjunctListItem *)arg1;
- (void)removeItemForIdentifier:(NSString *)arg1;

@end
