
@protocol NTKCollectionClient <NSObject>

@required

- (void)addFaceInstanceDescriptor:(NTKFaceInstanceDescriptor *)arg1 forUUID:(NSUUID *)arg2 seqId:(NSNumber *)arg3;
- (void)flushCompleteForIdentifier:(NSString *)arg1;
- (void)loadFullCollectionWithOrderedUUIDs:(void *)arg1 selectedUUID:(void *)arg2 facesDescriptorsByUUID:(void *)arg3 seqId:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 9: NSArray *, NSUUID *, NSDictionary *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)removeFaceForUUID:(void *)arg1 seqId:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: NSUUID *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)resetClientCollectionWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)updateFaceForUUID:(NSUUID *)arg1 withConfigurationJSONRepresentation:(NSDictionary *)arg2 seqId:(NSNumber *)arg3;
- (void)updateFaceForUUID:(void *)arg1 withResourceDirectory:(void *)arg2 seqId:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: NSUUID *, NSString *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)updateOrderedFaceUUIDs:(NSArray *)arg1 seqId:(NSNumber *)arg2;
- (void)updateSelectedFaceUUID:(NSUUID *)arg1 seqId:(NSNumber *)arg2;
- (void)upgradeFaceInstanceDescriptor:(NTKFaceInstanceDescriptor *)arg1 forUUID:(NSUUID *)arg2 seqID:(NSNumber *)arg3;

@end
