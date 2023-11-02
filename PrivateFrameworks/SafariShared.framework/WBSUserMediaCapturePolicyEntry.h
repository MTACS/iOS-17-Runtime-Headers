
@interface WBSUserMediaCapturePolicyEntry : NSObject {
    NSMutableDictionary * _ephemeralSalts;
    NSString * _origin;
    unsigned long long  _permission;
    double  _permissionExpirationDate;
    double  _permissionGrantDate;
    NSString * _persistentSalt;
    NSString * _topLevelOrigin;
}

@property (nonatomic, retain) NSMutableDictionary *ephemeralSalts;
@property (nonatomic, retain) NSString *origin;
@property (nonatomic) unsigned long long permission;
@property (nonatomic) double permissionExpirationDate;
@property (nonatomic) double permissionGrantDate;
@property (nonatomic, retain) NSString *persistentSalt;
@property (nonatomic, retain) NSString *topLevelOrigin;

- (void).cxx_destruct;
- (bool)_isValidUserMediaPermission:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (id)ephemeralSalts;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithPermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2 forOrigin:(id)arg3 topLevelOrigin:(id)arg4;
- (bool)isValid;
- (id)origin;
- (unsigned long long)permission;
- (double)permissionExpirationDate;
- (bool)permissionExpiresWithinOneDay;
- (double)permissionGrantDate;
- (id)persistentSalt;
- (void)setEphemeralSalts:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setPermission:(unsigned long long)arg1;
- (void)setPermissionExpirationDate:(double)arg1;
- (void)setPermissionGrantDate:(double)arg1;
- (void)setPersistentSalt:(id)arg1;
- (void)setTopLevelOrigin:(id)arg1;
- (id)topLevelOrigin;
- (void)updatePermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2;

@end
