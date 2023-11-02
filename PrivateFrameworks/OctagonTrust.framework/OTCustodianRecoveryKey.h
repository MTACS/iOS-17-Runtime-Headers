
@interface OTCustodianRecoveryKey : NSObject <NSSecureCoding> {
    NSString * _recoveryString;
    NSUUID * _uuid;
    NSData * _wrappedKey;
    NSData * _wrappingKey;
}

@property (nonatomic, readonly) NSString *recoveryString;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSData *wrappedKey;
@property (nonatomic, readonly) NSData *wrappingKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)generateWrappingWithError:(id*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 recoveryString:(id)arg2 error:(id*)arg3;
- (id)initWithWrappedKey:(id)arg1 wrappingKey:(id)arg2 uuid:(id)arg3 error:(id*)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCustodianRecoveryKey:(id)arg1;
- (id)recoveryString;
- (bool)unwrapWithError:(id*)arg1;
- (id)uuid;
- (id)wrappedKey;
- (id)wrappingKey;

@end
