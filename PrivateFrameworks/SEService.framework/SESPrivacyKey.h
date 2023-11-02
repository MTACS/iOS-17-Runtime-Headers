
@interface SESPrivacyKey : NSObject <NSSecureCoding> {
    NSDate * _creationDate;
    NSString * _groupIdentifier;
    NSString * _keyIdentifier;
    NSData * _publicKey;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, readonly) NSString *keyIdentifier;
@property (nonatomic, readonly) NSData *publicKey;

+ (bool)supportsSecureCoding;
+ (id)withGroupIdentifier:(id)arg1 keyIdentifier:(id)arg2 publicKey:(id)arg3 creationDate:(id)arg4;

- (void).cxx_destruct;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)keyIdentifier;
- (id)publicKey;

@end
