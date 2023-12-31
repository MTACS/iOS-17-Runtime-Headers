
@protocol FMKeychainItem <NSObject>

@required

- (NSDate *)creationDate;
- (NSDate *)lastModifyDate;
- (NSString *)password;
- (NSData *)rawData;

@end
