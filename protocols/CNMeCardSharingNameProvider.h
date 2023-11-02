
@protocol CNMeCardSharingNameProvider <NSObject>

@required

- (NSString *)familyName;
- (NSString *)givenName;
- (NSString *)middleName;
- (NSString *)nickname;

@end
