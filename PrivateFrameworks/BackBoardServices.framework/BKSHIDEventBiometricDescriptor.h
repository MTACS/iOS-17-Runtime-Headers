
@interface BKSHIDEventBiometricDescriptor : BKSHIDEventDescriptor {
    unsigned int  _biometricEventType;
}

@property (nonatomic, readonly) unsigned int biometricEventType;

+ (id)descriptorWithBiometricEventType:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (void)appendDescriptionToFormatter:(id)arg1;
- (unsigned int)biometricEventType;
- (bool)describes:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBiometricEventType:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
