
@interface AALoginResponseiCloudTokens : NSObject {
    NSString * _authToken;
    NSString * _cloudKitToken;
    NSString * _fmfAppToken;
    NSString * _fmfToken;
    NSString * _fmipAppToken;
    NSString * _fmipAuthToken;
    NSString * _fmipLostModeToken;
    NSString * _fmipSiriToken;
    NSString * _keyTransparencyToken;
    NSString * _mapsToken;
    NSString * _mdmServerToken;
    NSString * _searchPartyToken;
}

@property (nonatomic, readonly) NSString *authToken;
@property (nonatomic, readonly) NSString *cloudKitToken;
@property (nonatomic, readonly) NSString *fmfAppToken;
@property (nonatomic, readonly) NSString *fmfToken;
@property (nonatomic, readonly) NSString *fmipAppToken;
@property (nonatomic, readonly) NSString *fmipAuthToken;
@property (nonatomic, readonly) NSString *fmipLostModeToken;
@property (nonatomic, readonly) NSString *fmipSiriToken;
@property (nonatomic, readonly) NSString *keyTransparencyToken;
@property (nonatomic, readonly) NSString *mapsToken;
@property (nonatomic, readonly) NSString *mdmServerToken;
@property (nonatomic, readonly) NSString *searchPartyToken;

- (void).cxx_destruct;
- (id)authToken;
- (id)cloudKitToken;
- (id)fmfAppToken;
- (id)fmfToken;
- (id)fmipAppToken;
- (id)fmipAuthToken;
- (id)fmipLostModeToken;
- (id)fmipSiriToken;
- (id)initWithTokens:(id)arg1;
- (id)keyTransparencyToken;
- (id)mapsToken;
- (id)mdmServerToken;
- (id)searchPartyToken;

@end
