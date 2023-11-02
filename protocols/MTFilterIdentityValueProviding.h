
@protocol MTFilterIdentityValueProviding <NSObject>

@required

+ (id)mt_identityValueForFilter:(NSString *)arg1;

- (bool)mt_isIdentityValueForFilter:(NSString *)arg1;

@end
