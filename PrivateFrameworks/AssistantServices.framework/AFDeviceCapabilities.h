
@interface AFDeviceCapabilities : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _serializedBackingStore;
    long long  _voiceTriggerEnabled;
}

@property (nonatomic, readonly) long long voiceTriggerEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedBackingStore:(id)arg1;
- (id)initWithVoiceTriggerEnabled:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)serializedBackingStore;
- (long long)voiceTriggerEnabled;

@end
