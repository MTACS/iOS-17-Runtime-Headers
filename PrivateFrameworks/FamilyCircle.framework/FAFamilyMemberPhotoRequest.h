
@interface FAFamilyMemberPhotoRequest : AAFamilyRequest {
    <_TtP12FamilyCircle15FARequestSigner_> * _ephemeralAuthSigner;
    NSString * _familyMemberAltDSID;
    NSNumber * _familyMemberDSID;
    ACAccount * _iTunesAccount;
    NSString * _serverCacheTag;
}

@property (nonatomic, retain) <_TtP12FamilyCircle15FARequestSigner_> *ephemeralAuthSigner;
@property (nonatomic, copy) NSString *familyMemberAltDSID;
@property (nonatomic, copy) NSNumber *familyMemberDSID;
@property (setter=setiTunesAccount:, nonatomic, retain) ACAccount *iTunesAccount;
@property (nonatomic, copy) NSString *serverCacheTag;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)ephemeralAuthSigner;
- (id)fa_photoRequestBaseURLString;
- (id)familyMemberAltDSID;
- (id)familyMemberDSID;
- (id)iTunesAccount;
- (id)initWithMemberAltDSID:(id)arg1 accountStore:(id)arg2;
- (id)initWithMemberAltDSID:(id)arg1 ephemeralAuthResults:(id)arg2;
- (id)initWithMemberAltDSID:(id)arg1 ephemeralAuthSigner:(id)arg2;
- (id)initWithMemberDSID:(id)arg1 accountStore:(id)arg2;
- (id)serverCacheTag;
- (void)setEphemeralAuthSigner:(id)arg1;
- (void)setFamilyMemberAltDSID:(id)arg1;
- (void)setFamilyMemberDSID:(id)arg1;
- (void)setServerCacheTag:(id)arg1;
- (void)setiTunesAccount:(id)arg1;
- (id)urlRequest;
- (id)urlString;

@end
