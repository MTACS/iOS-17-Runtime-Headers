
@interface WLKUserSettings : NSObject <NSCopying> {
    bool  _activeUser;
    bool  _ageVerified;
    NSString * _country;
    bool  _favoritesSyncEnabled;
    bool  _globalAccountConsent;
}

@property (nonatomic, readonly) bool activeUser;
@property (nonatomic, readonly) bool ageVerified;
@property (nonatomic, readonly, copy) NSString *country;
@property (nonatomic, readonly) bool favoritesSyncEnabled;
@property (nonatomic, readonly) bool globalAccountConsent;

- (void).cxx_destruct;
- (id)_data;
- (id)_jsonDictionary;
- (bool)activeUser;
- (bool)ageVerified;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (bool)favoritesSyncEnabled;
- (bool)globalAccountConsent;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFavoritesSyncEnabled:(bool)arg1;

@end
