
@interface _NTKCollectionClientProxy : NSObject <NTKCollectionClient> {
    <NTKCollectionClient> * _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addFaceInstanceDescriptor:(id)arg1 forUUID:(id)arg2 seqId:(id)arg3;
- (void)flushCompleteForIdentifier:(id)arg1;
- (id)initWithWeakProxy:(id)arg1;
- (void)loadFullCollectionWithOrderedUUIDs:(id)arg1 selectedUUID:(id)arg2 facesDescriptorsByUUID:(id)arg3 seqId:(id)arg4 completion:(id /* block */)arg5;
- (void)removeFaceForUUID:(id)arg1 seqId:(id)arg2 completion:(id /* block */)arg3;
- (void)resetClientCollectionWithCompletion:(id /* block */)arg1;
- (void)updateFaceForUUID:(id)arg1 withConfigurationJSONRepresentation:(id)arg2 seqId:(id)arg3;
- (void)updateFaceForUUID:(id)arg1 withResourceDirectory:(id)arg2 seqId:(id)arg3 completion:(id /* block */)arg4;
- (void)updateOrderedFaceUUIDs:(id)arg1 seqId:(id)arg2;
- (void)updateSelectedFaceUUID:(id)arg1 seqId:(id)arg2;
- (void)upgradeFaceInstanceDescriptor:(id)arg1 forUUID:(id)arg2 seqID:(id)arg3;

@end
