
@interface MPModelLibrarySDKAddToPlaylistChangeRequest : NSObject <NSCopying> {
    id /* block */  _completionHandler;
    bool  _isCloudID;
    MPModelPlaylist * _playlist;
    NSString * _productID;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) bool isCloudID;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic, readonly, copy) NSString *productID;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithProductID:(id)arg1 isCloudID:(bool)arg2 playlist:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)isCloudID;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)playlist;
- (id)productID;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setPlaylist:(id)arg1;

@end
