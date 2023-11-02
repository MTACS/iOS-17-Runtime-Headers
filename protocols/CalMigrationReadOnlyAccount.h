
@protocol CalMigrationReadOnlyAccount <NSObject>

@required

- (NSString *)accountDescription;
- (id)accountPropertyForKey:(NSString *)arg1;
- (NSString *)accountTypeIdentifier;
- (bool)authenticated;
- (bool)enabledForCalendarsDataClass;
- (NSString *)identifier;
- (NSString *)parentAccountIdentifier;
- (bool)provisionedForCalendarsDataClass;
- (NSString *)username;
- (bool)visible;

@end
