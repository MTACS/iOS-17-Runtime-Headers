
@interface HDAttachment : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _creationDate;
    HDEncryptedArchiveSymmetricKey * _encryptionKey;
    NSString * _fileHash;
    NSUUID * _identifier;
    NSDictionary * _metadata;
    NSString * _name;
    unsigned long long  _size;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly, copy) HDEncryptedArchiveSymmetricKey *encryptionKey;
@property (nonatomic, readonly, copy) NSString *fileHash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly, copy) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionKey;
- (id)fileHash;
- (unsigned long long)hash;
- (id)hkAttachment;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(id)arg3 hash:(id)arg4 size:(unsigned long long)arg5 creationDate:(id)arg6 metadata:(id)arg7 encryptionKey:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)name;
- (unsigned long long)size;
- (id)type;

@end
