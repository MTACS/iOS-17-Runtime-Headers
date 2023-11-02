
@interface COCapabilityUpdateNotification : COMeshNotification {
    NSSet * _capabilities;
}

@property (nonatomic, readonly, copy) NSSet *capabilities;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)capabilities;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCapabilities:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
