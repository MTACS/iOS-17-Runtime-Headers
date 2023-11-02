
@protocol SFSafariPasswordCredential <NSCopying, NSObject, NSSecureCoding>

@required

- (NSDate *)creationDate;
- (bool)isExternal;
- (NSString *)password;
- (NSString *)site;
- (NSString *)user;

@end
