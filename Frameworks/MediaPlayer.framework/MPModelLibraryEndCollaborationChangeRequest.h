
@interface MPModelLibraryEndCollaborationChangeRequest : NSObject <NSCopying> {
    MPModelPlaylist * _collaborationToEnd;
    NSOperationQueue * _operationQueue;
}

@property (nonatomic, retain) MPModelPlaylist *collaborationToEnd;

+ (id)sharedOperationQueue;

- (void).cxx_destruct;
- (id)collaborationToEnd;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (void)setCollaborationToEnd:(id)arg1;

@end
