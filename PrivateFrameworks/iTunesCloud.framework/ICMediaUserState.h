
@interface ICMediaUserState : NSObject <ICMutableMediaUserState, NSSecureCoding> {
    bool  _ageVerificationRequired;
    NSString * _alternateDSID;
    NSString * _countryCode;
    NSNumber * _dsid;
    NSString * _firstName;
    bool  _frozen;
    NSArray * _homeUserIDs;
    NSString * _iCloudPersonID;
    NSString * _identifier;
    bool  _isActive;
    NSString * _lastName;
    ICMusicUserState * _music;
    NSString * _shortDebugName;
    NSString * _storefrontIdentifier;
    ICTVUserState * _tv;
    NSString * _username;
}

@property (nonatomic) bool ageVerificationRequired;
@property (nonatomic, copy) NSString *alternateDSID;
@property (nonatomic, copy) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *digest;
@property (nonatomic, copy) NSNumber *dsid;
@property (nonatomic, copy) NSString *firstName;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *homeUserIDs;
@property (nonatomic, copy) NSString *iCloudPersonID;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isActive;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, retain) ICMusicUserState *music;
@property (nonatomic, copy) NSString *shortDebugName;
@property (nonatomic, copy) NSString *storefrontIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICTVUserState *tv;
@property (nonatomic, copy) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)ageVerificationRequired;
- (id)alternateDSID;
- (id)copyWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (id)digest;
- (id)dsid;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)homeUserIDs;
- (id)iCloudPersonID;
- (id)identifier;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (bool)isFrozen;
- (id)lastName;
- (id)music;
- (id)redactedDescription;
- (void)setAgeVerificationRequired:(bool)arg1;
- (void)setAlternateDSID:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDsid:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setHomeUserIDs:(id)arg1;
- (void)setICloudPersonID:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setLastName:(id)arg1;
- (void)setMusic:(id)arg1;
- (void)setShortDebugName:(id)arg1;
- (void)setStorefrontIdentifier:(id)arg1;
- (void)setTv:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)shortDebugName;
- (id)storefrontIdentifier;
- (id)tv;
- (id)username;

@end
