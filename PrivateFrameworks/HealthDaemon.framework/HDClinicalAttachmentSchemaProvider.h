
@interface HDClinicalAttachmentSchemaProvider : NSObject <HDAttachmentSchemaProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)schemaIdentifier;

- (bool)readAuthorizationForObjectIdentifier:(id)arg1 client:(id)arg2 profile:(id)arg3 error:(id*)arg4;
- (long long)schemaVersionForObjectIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (bool)validateAttachment:(id)arg1 forObjectWithIdentifier:(id)arg2 metadata:(id)arg3 profile:(id)arg4 error:(id*)arg5;
- (bool)writeAuthorizationForObjectIdentifier:(id)arg1 client:(id)arg2 profile:(id)arg3 error:(id*)arg4;

@end
