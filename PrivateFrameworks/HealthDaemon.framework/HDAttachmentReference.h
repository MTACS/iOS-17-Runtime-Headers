
@interface HDAttachmentReference : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _attachmentIdentifier;
    long long  _cloudStatus;
    NSDate * _creationDate;
    NSUUID * _identifier;
    NSDictionary * _metadata;
    NSString * _objectIdentifier;
    long long  _options;
    NSString * _schemaIdentifier;
    long long  _schemaVersion;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSUUID *attachmentIdentifier;
@property (nonatomic, readonly) long long cloudStatus;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSString *objectIdentifier;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly, copy) NSString *schemaIdentifier;
@property (nonatomic, readonly) long long schemaVersion;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachmentIdentifier;
- (long long)cloudStatus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hkAttachmentReferenceWithAttachment:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 schemaIdentifier:(id)arg2 creationDate:(id)arg3 options:(long long)arg4 metadata:(id)arg5;
- (id)initWithIdentifier:(id)arg1 schemaIdentifier:(id)arg2 creationDate:(id)arg3 options:(long long)arg4 metadata:(id)arg5 type:(long long)arg6 cloudStatus:(long long)arg7;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)objectIdentifier;
- (long long)options;
- (id)referenceWithObjectIdentifier:(id)arg1;
- (id)schemaIdentifier;
- (long long)schemaVersion;
- (long long)type;

@end
