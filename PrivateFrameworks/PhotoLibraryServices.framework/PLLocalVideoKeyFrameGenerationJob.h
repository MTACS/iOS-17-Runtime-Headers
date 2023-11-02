
@interface PLLocalVideoKeyFrameGenerationJob : NSObject {
    NSManagedObjectID * _assetObjectID;
    NSMutableArray * _completionHandlers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _handlerLock;
    PLPhotoLibraryPathManagerIdentifier * _libraryID;
    bool  _networkAccessAllowed;
}

@property (nonatomic, retain) NSManagedObjectID *assetObjectID;
@property (nonatomic, copy) PLPhotoLibraryPathManagerIdentifier *libraryID;
@property (nonatomic) bool networkAccessAllowed;

- (void).cxx_destruct;
- (void)addCompletionHandler:(id /* block */)arg1;
- (id)assetObjectID;
- (void)callCompletionHandlersWithMutatedMoc:(id)arg1 error:(id)arg2 storedRecipes:(id)arg3 affectedRecipes:(id)arg4 sourceMetadata:(id)arg5;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToJob:(id)arg1;
- (id)libraryID;
- (bool)networkAccessAllowed;
- (void)setAssetObjectID:(id)arg1;
- (void)setLibraryID:(id)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;

@end
