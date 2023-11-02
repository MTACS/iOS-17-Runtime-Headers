
@interface FOAuthorizationRecord : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSUUID * _recordIdentifier;
    long long  _status;
    NSString * _teamIdentifier;
    long long  _type;
}

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSUUID *recordIdentifier;
@property (readonly) long long status;
@property (readonly, copy) NSString *teamIdentifier;
@property (readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 teamIdentifier:(id)arg2 recordIdentifier:(id)arg3 status:(long long)arg4 type:(long long)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)recordIdentifier;
- (long long)status;
- (id)teamIdentifier;
- (long long)type;

@end
