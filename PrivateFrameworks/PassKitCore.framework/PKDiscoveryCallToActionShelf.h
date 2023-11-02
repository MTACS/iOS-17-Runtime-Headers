
@interface PKDiscoveryCallToActionShelf : PKDiscoveryShelf {
    PKDiscoveryCallToAction * _callToAction;
    bool  _useImageAsTitle;
}

@property (nonatomic, readonly) PKDiscoveryCallToAction *callToAction;
@property (nonatomic, readonly) bool useImageAsTitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)callToAction;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)localizeWithBundle:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;
- (void)setItem:(id)arg1;
- (bool)useImageAsTitle;

@end
