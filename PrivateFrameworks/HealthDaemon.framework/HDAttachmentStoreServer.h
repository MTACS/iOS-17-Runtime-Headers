
@interface HDAttachmentStoreServer : HDStandardTaskServer <HKAttachmentStoreServerInterface> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _openReadersByAttachment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_addAttachmentWithName:(id)arg1 contentTypeIdentifier:(id)arg2 fileHandle:(id)arg3 toObjectWithIdentifier:(id)arg4 schemaIdentifier:(id)arg5 attachmentMetadata:(id)arg6 referenceMetadata:(id)arg7 completion:(id /* block */)arg8;
- (void)remote_addReferenceWithAttachment:(id)arg1 toObjectWithIdentifier:(id)arg2 schemaIdentifier:(id)arg3 metadata:(id)arg4 completion:(id /* block */)arg5;
- (void)remote_attachmentReferencesForObjectIdentifier:(id)arg1 schemaIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_getDataChunkForAttachment:(id)arg1 chunkSize:(unsigned long long)arg2 offset:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)remote_removeAllReferencesWithAttachmentIdentifier:(id)arg1 objectIdentifier:(id)arg2 schemaIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_streamDataForAttachment:(id)arg1;

@end
