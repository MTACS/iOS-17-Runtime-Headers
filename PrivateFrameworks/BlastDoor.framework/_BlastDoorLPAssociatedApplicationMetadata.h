
@interface _BlastDoorLPAssociatedApplicationMetadata : _BlastDoorLPSpecializationMetadata {
    NSString * _action;
    NSString * _bundleIdentifier;
    NSString * _caption;
    long long  _clipAction;
    _BlastDoorLPImage * _icon;
}

@property (nonatomic, copy) NSString *action;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *caption;
@property (nonatomic) long long clipAction;
@property (nonatomic, retain) _BlastDoorLPImage *icon;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)bundleIdentifier;
- (id)caption;
- (long long)clipAction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setClipAction:(long long)arg1;
- (void)setIcon:(id)arg1;

@end
