
@interface COCapabilityReadResponse : COMeshResponse {
    NSSet * _capabilities;
}

@property (nonatomic, readonly, copy) NSSet *capabilities;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)capabilities;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCapabilities:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
