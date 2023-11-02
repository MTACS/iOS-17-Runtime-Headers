
@interface PBFPosterSnapshotCollection : NSObject <BSCancellable> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _lock_definitionToCollection;
    NSString * _uniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (bool)beginRequestForDefinition:(id)arg1 displayContext:(id)arg2 invalidationContext:(id)arg3;
- (void)cancel;
- (bool)completeRequestForDefinition:(id)arg1 displayContext:(id)arg2 receivedSnapshot:(id)arg3 receivedError:(id)arg4;
- (void)enumerateInProgressRequests:(id /* block */)arg1;
- (void)failPreviewImageForDefinition:(id)arg1 displayContext:(id)arg2 error:(id)arg3;
- (unsigned long long)hash;
- (id)initWithUniqueIdentifier:(id)arg1;
- (id)invalidateAndRemoveInProgressRequestsNotMatchingContext:(id)arg1;
- (unsigned long long)numberOfTimesSnapshotHasFailedToHydrateForDefinition:(id)arg1 displayContext:(id)arg2;
- (id)receivedImageForDefinition:(id)arg1 displayContext:(id)arg2;
- (bool)shouldProceedFetchingSnapshotForDefinition:(id)arg1 displayContext:(id)arg2 maxNumberOfRetryAfterErrors:(unsigned long long)arg3;
- (long long)snapshotRequestStatusForDefinition:(id)arg1 displayContext:(id)arg2 outInvalidationContext:(out id*)arg3;
- (id)uniqueIdentifier;

@end
