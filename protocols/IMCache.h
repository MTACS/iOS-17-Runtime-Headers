
@protocol IMCache <NSObject>

@required

- (void)clearCache;
- (bool)hasItemForKey:(NSString *)arg1;
- (bool)isEmpty;
- (void)removeItemForKey:(NSString *)arg1;
- (void)removeItemsWithPrefx:(NSString *)arg1;

@end
