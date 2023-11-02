
@interface PRSPosterUpdateTristatePayload : PRSPosterUpdatePayload <NSSecureCoding> {
    NSNumber * _tristate;
}

@property (nonatomic, readonly) NSNumber *tristate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(id)arg1;
- (id)rawValue;
- (id)tristate;

@end
