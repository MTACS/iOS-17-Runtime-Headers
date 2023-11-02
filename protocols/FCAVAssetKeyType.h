
@protocol FCAVAssetKeyType <FCContentArchivable>

@required

- (NSDate *)creationDate;
- (NSDate *)expirationDate;
- (bool)isExpired;
- (NSData *)keyData;

@end
