
@protocol CRKContact <NSObject>

@required

- (NSString *)familyName;
- (NSString *)givenName;
- (NSString *)identifier;
- (NSString *)nickname;
- (NSString *)phoneticFamilyName;
- (NSString *)phoneticGivenName;
- (NSData *)thumbnailImageData;

@end
