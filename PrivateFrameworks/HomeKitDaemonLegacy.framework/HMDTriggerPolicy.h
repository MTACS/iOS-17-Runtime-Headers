
@interface HMDTriggerPolicy : HMFObject <NSSecureCoding> {
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyPolicy:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)uuid;

@end
