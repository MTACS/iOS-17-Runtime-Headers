
@interface ICRadioTrackInfoContentReference : ICRadioStoreContentReference <NSCopying, NSSecureCoding> {
    NSDictionary * _trackInfo;
}

@property (nonatomic, readonly, copy) NSDictionary *trackInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreIdentifier:(id)arg1 trackInfo:(id)arg2;
- (id)rawContentDictionaryWithSubscriptionStatus:(id)arg1;
- (id)trackInfo;

@end
