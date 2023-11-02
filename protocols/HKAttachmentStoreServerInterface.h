
@protocol HKAttachmentStoreServerInterface <NSObject>

@required

- (void)remote_addAttachmentWithName:(void *)arg1 contentTypeIdentifier:(void *)arg2 fileHandle:(void *)arg3 toObjectWithIdentifier:(void *)arg4 schemaIdentifier:(void *)arg5 attachmentMetadata:(void *)arg6 referenceMetadata:(void *)arg7 completion:(void *)arg8; // needs 8 arg types, found 14: NSString *, NSString *, NSFileHandle *, NSString *, NSString *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKAttachmentReference *, NSError *, void*
- (void)remote_addReferenceWithAttachment:(void *)arg1 toObjectWithIdentifier:(void *)arg2 schemaIdentifier:(void *)arg3 metadata:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: HKAttachment *, NSString *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKAttachmentReference *, NSError *, void*
- (void)remote_attachmentReferencesForObjectIdentifier:(void *)arg1 schemaIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_getDataChunkForAttachment:(void *)arg1 chunkSize:(void *)arg2 offset:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: HKAttachment *, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)remote_removeAllReferencesWithAttachmentIdentifier:(void *)arg1 objectIdentifier:(void *)arg2 schemaIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSUUID *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_streamDataForAttachment:(HKAttachment *)arg1;

@end
