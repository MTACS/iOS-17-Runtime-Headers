
@protocol CALNIconCache <NSObject>

@required

- (bool)addIconsWithIdentifiers:(NSArray *)arg1 error:(id*)arg2;
- (NSString *)cachedIconPathForIconIdentifier:(NSString *)arg1;
- (bool)forceRemoveAllCachedIconsWithError:(id*)arg1;
- (NSString *)iconIdentifierForCachedIconPath:(NSString *)arg1;
- (bool)removeIconWithIdentifier:(NSString *)arg1 error:(id*)arg2;

@end
