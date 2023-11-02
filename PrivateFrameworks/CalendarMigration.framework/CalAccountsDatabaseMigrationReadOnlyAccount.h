
@interface CalAccountsDatabaseMigrationReadOnlyAccount : NSObject <CalMigrationReadOnlyAccount> {
    NSString * _accountDescription;
    NSMutableDictionary * _accountProperties;
    NSString * _accountTypeIdentifier;
    bool  _authenticated;
    bool  _enabledForCalendarsDataClass;
    NSString * _identifier;
    NSString * _parentAccountIdentifier;
    bool  _provisionedForCalendarsDataClass;
    NSString * _username;
    bool  _visible;
}

@property (nonatomic, readonly) NSString *accountDescription;
@property (nonatomic, readonly) bool authenticated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enabledForCalendarsDataClass;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool provisionedForCalendarsDataClass;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) bool visible;

- (void).cxx_destruct;
- (id)accountDescription;
- (id)accountPropertyForKey:(id)arg1;
- (id)accountTypeIdentifier;
- (bool)authenticated;
- (bool)enabledForCalendarsDataClass;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 accountTypeIdentifier:(id)arg3 description:(id)arg4 enabledForCalendarDataClass:(bool)arg5 provisionedForCalendarDataClass:(bool)arg6 visible:(bool)arg7 authenticated:(bool)arg8 username:(id)arg9 properties:(id)arg10;
- (id)parentAccountIdentifier;
- (bool)provisionedForCalendarsDataClass;
- (id)username;
- (bool)visible;

@end
