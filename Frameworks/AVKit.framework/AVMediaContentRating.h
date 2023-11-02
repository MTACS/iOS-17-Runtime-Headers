
@interface AVMediaContentRating : NSObject {
    NSString * _countryCode;
    NSString * _displayName;
    long long  _domain;
    long long  _rank;
    bool  _restricted;
}

@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) long long domain;
@property (nonatomic, readonly) UIImage *image;
@property (getter=isImageMask, nonatomic, readonly) bool imageMask;
@property (nonatomic, readonly) long long rank;
@property (getter=isRestricted, setter=_setRestricted:, nonatomic) bool restricted;

+ (id)contentRestrictionsCountryCode;

- (void).cxx_destruct;
- (bool)_isCurrentlyRestricted;
- (void)_setRestricted:(bool)arg1;
- (id)countryCode;
- (id)description;
- (id)displayName;
- (long long)domain;
- (unsigned long long)hash;
- (id)image;
- (id)init;
- (id)initWithRating:(id)arg1 rank:(long long)arg2 countryCode:(id)arg3 domain:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMediaContentRating:(id)arg1;
- (bool)isImageMask;
- (bool)isRestricted;
- (long long)rank;

@end
