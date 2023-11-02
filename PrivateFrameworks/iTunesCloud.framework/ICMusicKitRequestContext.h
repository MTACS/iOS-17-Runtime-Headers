
@interface ICMusicKitRequestContext : ICStoreRequestContext <NSSecureCoding> {
    NSString * _cachedDescription;
    NSString * _collectionPlaybackAuthorizationToken;
    <ICDeveloperTokenProvider> * _developerTokenProvider;
    long long  _personalizationMethod;
    NSString * _playbackAuthorizationToken;
}

@property (nonatomic, readonly) long long _storeRequestPersonalizationStyle;
@property (nonatomic, readonly, copy) NSString *collectionPlaybackAuthorizationToken;
@property (nonatomic, readonly) <ICDeveloperTokenProvider> *developerTokenProvider;
@property (nonatomic, readonly) long long personalizationMethod;
@property (nonatomic, readonly) long long personalizationStyle;
@property (nonatomic, readonly, copy) NSString *playbackAuthorizationToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_description;
- (long long)_storeRequestPersonalizationStyle;
- (id)collectionPlaybackAuthorizationToken;
- (id)copyWithBlock:(id /* block */)arg1;
- (id)description;
- (id)developerTokenProvider;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)personalizationMethod;
- (long long)personalizationStyle;
- (id)playbackAuthorizationToken;
- (void)setCollectionPlaybackAuthorizationToken:(id)arg1;
- (void)setDeveloperTokenProvider:(id)arg1;
- (void)setPersonalizationMethod:(long long)arg1;
- (void)setPersonalizationStyle:(long long)arg1;
- (void)setPlaybackAuthorizationToken:(id)arg1;

@end
