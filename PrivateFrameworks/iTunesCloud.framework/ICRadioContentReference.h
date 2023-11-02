
@interface ICRadioContentReference : NSObject <NSCopying, NSSecureCoding> {
    NSString * _playbackAuthorizationToken;
}

@property (nonatomic, readonly) long long contentType;
@property (nonatomic, copy) NSString *playbackAuthorizationToken;

+ (id)storeItemWithIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)matchDictionaryWithSubscriptionStatus:(id)arg1;
- (id)playbackAuthorizationToken;
- (id)rawContentDictionaryWithSubscriptionStatus:(id)arg1;
- (void)setPlaybackAuthorizationToken:(id)arg1;

@end
