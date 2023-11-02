
@interface HMUserCloudShareRepairInfo : NSObject <NSSecureCoding> {
    NSUUID * _identifier;
    long long  _version;
}

@property (readonly, copy) NSUUID *identifier;
@property (readonly) long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 version:(long long)arg2;
- (long long)version;

@end
