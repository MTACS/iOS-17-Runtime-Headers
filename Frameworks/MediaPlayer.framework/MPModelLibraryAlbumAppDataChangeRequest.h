
@interface MPModelLibraryAlbumAppDataChangeRequest : NSObject <NSCopying> {
    MPMediaLibraryAlbumAppData * _albumAppData;
    MPModelObject * _modelObject;
}

@property (nonatomic, retain) MPMediaLibraryAlbumAppData *albumAppData;
@property (nonatomic, retain) MPModelObject *modelObject;

- (void).cxx_destruct;
- (id)albumAppData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)modelObject;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)setAlbumAppData:(id)arg1;
- (void)setModelObject:(id)arg1;

@end
