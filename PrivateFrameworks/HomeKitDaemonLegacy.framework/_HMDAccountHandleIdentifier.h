
@interface _HMDAccountHandleIdentifier : _HMDAccountIdentifier {
    HMDAccountHandle * _accountHandle;
}

@property (readonly, copy) HMDAccountHandle *accountHandle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountHandle;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithAccountHandle:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)kind;

@end
