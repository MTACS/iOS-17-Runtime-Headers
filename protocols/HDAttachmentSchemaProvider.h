
@protocol HDAttachmentSchemaProvider <NSObject>

@required

+ (NSString *)schemaIdentifier;

- (bool)readAuthorizationForObjectIdentifier:(NSString *)arg1 client:(HDHealthStoreClient *)arg2 profile:(HDProfile *)arg3 error:(id*)arg4;
- (long long)schemaVersionForObjectIdentifier:(NSString *)arg1 profile:(HDProfile *)arg2 error:(id*)arg3;
- (bool)validateAttachment:(HKAttachment *)arg1 forObjectWithIdentifier:(NSString *)arg2 metadata:(NSDictionary *)arg3 profile:(HDProfile *)arg4 error:(id*)arg5;
- (bool)writeAuthorizationForObjectIdentifier:(NSString *)arg1 client:(HDHealthStoreClient *)arg2 profile:(HDProfile *)arg3 error:(id*)arg4;

@end
