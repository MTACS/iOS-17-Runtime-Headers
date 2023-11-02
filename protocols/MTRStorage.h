
@protocol MTRStorage <NSObject>

@required

- (bool)removeStorageDataForKey:(NSString *)arg1;
- (bool)setStorageData:(NSData *)arg1 forKey:(NSString *)arg2;
- (NSData *)storageDataForKey:(NSString *)arg1;

@end
