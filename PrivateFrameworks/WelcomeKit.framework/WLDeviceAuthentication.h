
@interface WLDeviceAuthentication : NSObject <NSSecureCoding> {
    NSString * _sessionUUID;
}

@property (nonatomic, readonly) NSString *sessionUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)sessionUUID;

@end
