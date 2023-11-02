
@interface HMAnnounceUserSettings : HMFObject <NSSecureCoding> {
    unsigned long long  _deviceNotificationMode;
}

@property (readonly) unsigned long long deviceNotificationMode;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (id)attributeDescriptions;
- (unsigned long long)deviceNotificationMode;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceNotificationMode:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)privateDescription;
- (id)shortDescription;

@end
