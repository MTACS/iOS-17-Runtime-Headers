
@interface IDSGroupSessionDataCryptor : NSObject <CPDataCryptor, NSCopying, NSSecureCoding> {
    NSMapTable * _decryptionCryptorsByKeyID;
    NSMutableDictionary * _decryptionKeysByKeyID;
    struct _CCCryptor { } * _encryptingCryptor;
    NSData * _encryptingKey;
    NSUUID * _encryptingKeyID;
    NSData * _encryptingKeySalt;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _topic;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *decryptionKeyIDSet;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSUUID *encryptionKeyID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/IDS.framework/IDS

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)decryptData:(id)arg1 keyID:(id)arg2 sequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptData:(id)arg1 sequenceNumber:(unsigned long long)arg2 error:(id*)arg3;
- (id)getDecryptionKeyIDSet;
- (id)getEncryptionKeyID;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopic:(id)arg1;
- (id)initWithTopic:(id)arg1 keyManager:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCryptor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CopresenceCore.framework/CopresenceCore

- (id)decryptData:(id)arg1 keyID:(id)arg2 seqNum:(unsigned long long)arg3 error:(id*)arg4;
- (id)decryptionKeyIDSet;
- (id)encryptData:(id)arg1 seqNum:(unsigned long long)arg2 error:(id*)arg3;
- (id)encryptionKeyID;

@end
