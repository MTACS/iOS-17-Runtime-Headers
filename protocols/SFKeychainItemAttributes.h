
@protocol SFKeychainItemAttributes <NSObject, NSCopying, NSSecureCoding>

@required

- (NSString *)localizedDescription;
- (NSString *)localizedLabel;
- (NSString *)persistentIdentifier;
- (void)setLocalizedDescription:(NSString *)arg1;
- (void)setLocalizedLabel:(NSString *)arg1;

@end
