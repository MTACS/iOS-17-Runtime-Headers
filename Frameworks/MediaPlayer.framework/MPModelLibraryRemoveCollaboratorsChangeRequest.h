
@interface MPModelLibraryRemoveCollaboratorsChangeRequest : NSObject <NSCopying> {
    MPModelPlaylist * _collaboration;
    NSOperationQueue * _operationQueue;
    NSArray * _socialProfileIDsToRemove;
}

@property (nonatomic, retain) MPModelPlaylist *collaboration;
@property (nonatomic, retain) NSArray *socialProfileIDsToRemove;

+ (id)sharedOperationQueue;

- (void).cxx_destruct;
- (id)collaboration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (void)setCollaboration:(id)arg1;
- (void)setSocialProfileIDsToRemove:(id)arg1;
- (id)socialProfileIDsToRemove;

@end
