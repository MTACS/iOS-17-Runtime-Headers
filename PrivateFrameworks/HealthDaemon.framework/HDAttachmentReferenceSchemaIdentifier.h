
@interface HDAttachmentReferenceSchemaIdentifier : NSObject <NSCopying> {
    NSUUID * _attachmentIdentifier;
    NSString * _objectIdentifier;
    NSString * _schemaIdentifier;
    long long  _schemaVersion;
}

@property (nonatomic, readonly, copy) NSUUID *attachmentIdentifier;
@property (nonatomic, readonly, copy) NSString *objectIdentifier;
@property (nonatomic, readonly, copy) NSString *schemaIdentifier;
@property (nonatomic, readonly) long long schemaVersion;

+ (id)tombstoneSchemaIdentifier;

- (void).cxx_destruct;
- (id)attachmentIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithSchemaIdentifier:(id)arg1 schemaVersion:(long long)arg2 objectIdentifier:(id)arg3 attachmentIdentifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)objectIdentifier;
- (id)schemaIdentifier;
- (long long)schemaVersion;

@end
