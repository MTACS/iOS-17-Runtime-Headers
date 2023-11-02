
@interface STUserData : NSObject {
    bool  _checkForUnsafePhotos;
    NSString * _familyMemberType;
    NSString * _givenName;
    bool  _hasPasscode;
    NSString * _identifier;
    bool  _isCommunicationSafetyAnalyticsEnabled;
    bool  _isCommunicationSafetyNotificationEnabled;
    bool  _isParent;
    bool  _isRemote;
    bool  _screenTimeEnabled;
    bool  _syncingEnabled;
}

@property (nonatomic, readonly) bool checkForUnsafePhotos;
@property (nonatomic, readonly) NSString *familyMemberType;
@property (nonatomic, readonly, copy) NSString *givenName;
@property (nonatomic, readonly) bool hasPasscode;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isCommunicationSafetyAnalyticsEnabled;
@property (nonatomic, readonly) bool isCommunicationSafetyNotificationEnabled;
@property (nonatomic, readonly) bool isParent;
@property (nonatomic, readonly) bool isRemote;
@property (nonatomic, readonly) bool screenTimeEnabled;
@property (nonatomic, readonly) bool syncingEnabled;

- (void).cxx_destruct;
- (bool)checkForUnsafePhotos;
- (id)familyMemberType;
- (id)givenName;
- (bool)hasPasscode;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 givenName:(id)arg2 isParent:(bool)arg3 isRemote:(bool)arg4 hasPasscode:(bool)arg5 screenTimeEnabled:(bool)arg6 syncingEnabled:(bool)arg7 checkForUnsafePhotos:(bool)arg8 communicationSafetyNotificationEnabled:(bool)arg9 communicationSafetyAnalyticsEnabled:(bool)arg10 familyMemberType:(id)arg11;
- (bool)isCommunicationSafetyAnalyticsEnabled;
- (bool)isCommunicationSafetyNotificationEnabled;
- (bool)isParent;
- (bool)isRemote;
- (bool)screenTimeEnabled;
- (bool)syncingEnabled;

@end
