
@interface OTInheritanceKey : NSObject <NSSecureCoding> {
    NSData * _claimTokenData;
    NSString * _claimTokenString;
    NSData * _recoveryKeyData;
    NSUUID * _uuid;
    NSData * _wrappedKeyData;
    NSString * _wrappedKeyString;
    NSData * _wrappingKeyData;
    NSString * _wrappingKeyString;
}

@property (nonatomic, readonly) AKInheritanceAccessKey *accessCode;
@property (nonatomic, readonly) NSData *claimTokenData;
@property (nonatomic, readonly) NSString *claimTokenString;
@property (nonatomic, readonly) NSData *recoveryKeyData;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSData *wrappedKeyData;
@property (nonatomic, readonly) NSString *wrappedKeyString;
@property (nonatomic, readonly) NSData *wrappingKeyData;
@property (nonatomic, readonly) NSString *wrappingKeyString;

// Image: /System/Library/PrivateFrameworks/OctagonTrust.framework/OctagonTrust

+ (id)base32:(const char *)arg1 len:(unsigned long long)arg2;
+ (id)parseBase32:(id)arg1 checksumSize:(unsigned long long)arg2 error:(id*)arg3;
+ (id)printableWithData:(id)arg1 checksumSize:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;
+ (id)unbase32:(const char *)arg1 len:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)claimTokenData;
- (id)claimTokenString;
- (void)encodeWithCoder:(id)arg1;
- (bool)generateWrappingWithError:(id*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 error:(id*)arg2;
- (id)initWithWrappedKeyData:(id)arg1 wrappingKeyData:(id)arg2 uuid:(id)arg3 error:(id*)arg4;
- (id)initWithWrappedKeyData:(id)arg1 wrappingKeyString:(id)arg2 uuid:(id)arg3 error:(id*)arg4;
- (id)initWithWrappedKeyString:(id)arg1 wrappingKeyData:(id)arg2 uuid:(id)arg3 error:(id*)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOTInheritanceKey:(id)arg1;
- (bool)isRecoveryKeyEqual:(id)arg1;
- (id)recoveryKeyData;
- (bool)unwrapWithError:(id*)arg1;
- (id)uuid;
- (id)wrappedKeyData;
- (id)wrappedKeyString;
- (id)wrappingKeyData;
- (id)wrappingKeyString;

// Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP

- (id)accessCode;
- (id)initFromAccessKey:(id)arg1;

@end
