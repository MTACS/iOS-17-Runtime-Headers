
@protocol HMDPersistentStore <NSObject>

@required

+ (void)archiveBulletinBoard:(HMDBulletinBoard *)arg1;
+ (HMDBulletinBoard *)unarchiveBulletinBoard;

- (NSNumber *)archiveDictionary:(NSDictionary *)arg1 withPath:(NSString *)arg2 forKey:(NSString *)arg3;
- (NSDictionary *)unarchiveDictionaryWithPath:(NSString *)arg1 allowedClasses:(NSSet *)arg2 forKey:(NSString *)arg3;
- (NSNumber *)writeData:(NSData *)arg1 toStorePath:(NSString *)arg2 dataLabel:(NSString *)arg3;

@end
