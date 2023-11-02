
@interface HKAttachmentStore : NSObject <HKAttachmentStoreClientInterface, _HKXPCExportable> {
    NSMutableDictionary * _attachmentDataHandlersByIdentifier;
    NSMutableDictionary * _dataStreamProgressByIdentifier;
    HKHealthStore * _healthStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKTaskServerProxyProvider *proxyProvider;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (bool)_validateInputWithObject:(id)arg1 contentType:(id)arg2 URL:(id)arg3 error:(id*)arg4;
- (void)addAttachmentToObject:(id)arg1 name:(id)arg2 contentType:(id)arg3 URL:(id)arg4 metadata:(id)arg5 completion:(id /* block */)arg6;
- (void)addAttachmentWithName:(id)arg1 contentType:(id)arg2 URL:(id)arg3 toObjectWithIdentifier:(id)arg4 schemaIdentifier:(id)arg5 attachmentMetadata:(id)arg6 referenceMetadata:(id)arg7 completion:(id /* block */)arg8;
- (void)addReferenceWithAttachment:(id)arg1 toObjectWithIdentifier:(id)arg2 schemaIdentifier:(id)arg3 metadata:(id)arg4 completion:(id /* block */)arg5;
- (void)attachmentReferencesForObjectIdentifier:(id)arg1 schemaIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)clientRemote_streamDataForAttachment:(id)arg1 dataChunk:(id)arg2 error:(id)arg3 done:(bool)arg4;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)getAttachmentsForObject:(id)arg1 completion:(id /* block */)arg2;
- (void)getDataChunkForAttachment:(id)arg1 chunkSize:(unsigned long long)arg2 offset:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)getDataForAttachment:(id)arg1 completion:(id /* block */)arg2;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (id)proxyProvider;
- (id)remoteInterface;
- (void)removeAttachment:(id)arg1 fromObject:(id)arg2 completion:(id /* block */)arg3;
- (void)removeReference:(id)arg1 schemaIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)streamDataForAttachment:(id)arg1 dataHandler:(id /* block */)arg2;

@end
