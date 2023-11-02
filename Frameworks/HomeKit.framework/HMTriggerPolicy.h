
@interface HMTriggerPolicy : NSObject <NSSecureCoding> {
    NSUUID * _identifier;
}

@property (nonatomic, readonly) NSUUID *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
