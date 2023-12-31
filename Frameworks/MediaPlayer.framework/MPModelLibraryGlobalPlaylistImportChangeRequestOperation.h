
@interface MPModelLibraryGlobalPlaylistImportChangeRequestOperation : MPAsyncOperation {
    NSString * _globalPlaylistID;
    MPMediaLibrary * _mediaLibrary;
    id /* block */  _responseHandler;
    bool  _shouldLibraryAdd;
}

@property (nonatomic, copy) NSString *globalPlaylistID;
@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic) bool shouldLibraryAdd;

- (void).cxx_destruct;
- (void)execute;
- (id)globalPlaylistID;
- (id)mediaLibrary;
- (id /* block */)responseHandler;
- (void)setGlobalPlaylistID:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setShouldLibraryAdd:(bool)arg1;
- (bool)shouldLibraryAdd;

@end
