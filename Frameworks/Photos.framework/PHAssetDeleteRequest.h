
@interface PHAssetDeleteRequest : PHTrashableObjectDeleteRequest {
    PHAssetDeleteOptions * _deleteOptions;
}

@property (nonatomic, copy) PHAssetDeleteOptions *deleteOptions;

- (void).cxx_destruct;
- (void)_updateSyndicationStateForSyndicationIdentifier:(id)arg1 savedAssetType:(short)arg2 sourceLibraryID:(long long)arg3;
- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;
- (id)deleteOptions;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (void)setDeleteOptions:(id)arg1;
- (bool)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2;

@end
