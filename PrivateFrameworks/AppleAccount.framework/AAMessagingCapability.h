
@interface AAMessagingCapability : NSObject <NSSecureCoding> {
    long long  _capability;
}

@property (nonatomic, readonly) long long capability;
@property (nonatomic, readonly) NSString *capabilityString;

+ (bool)supportsSecureCoding;

- (long long)capability;
- (id)capabilityString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCapabilityType:(long long)arg1;
- (id)initWithCoder:(id)arg1;

@end
