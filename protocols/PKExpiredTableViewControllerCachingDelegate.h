
@protocol PKExpiredTableViewControllerCachingDelegate <NSObject>

@required

- (PKPass *)passAtIndexPath:(NSIndexPath *)arg1;
- (bool)passExistsWithUniqueIdentifier:(NSString *)arg1;
- (void)prefetchItemsAtIndexPaths:(NSArray *)arg1;

@end
