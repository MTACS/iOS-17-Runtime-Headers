
@interface FPFetchThumbnailsOperation : FPOperation <FPOperationProgressDelegate> {
    NSMutableArray * _appLibraryItems;
    struct CGSize { 
        double width; 
        double height; 
    }  _desiredSize;
    NSMutableDictionary * _dictionary;
    FPItemManager * _itemManager;
    id /* block */  _perThumbnailCompletionBlock;
    id /* block */  _perThumbnailWithVersionCompletionBlock;
    NSMutableArray * _placeHoldersItems;
    double  _screenScale;
    NSOperationQueue * _subOperationQueue;
    NSMutableArray * _subOperations;
    id /* block */  _thumbnailsFetchCompletionBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ perThumbnailCompletionBlock;
@property (nonatomic, copy) id /* block */ perThumbnailWithVersionCompletionBlock;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ thumbnailsFetchCompletionBlock;

- (void).cxx_destruct;
- (void)_perItemCompletionBlockFor:(id)arg1 version:(id)arg2 thumbnailURL:(id)arg3 thumbnailData:(id)arg4 contentType:(id)arg5 metadata:(id)arg6 error:(id)arg7;
- (void)cancel;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)init;
- (id)initWithItem:(id)arg1 versions:(id)arg2 desiredSize:(struct CGSize { double x1; double x2; })arg3 screenScale:(double)arg4 itemManager:(id)arg5;
- (id)initWithItems:(id)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2 screenScale:(double)arg3 itemManager:(id)arg4;
- (void)main;
- (void)operation:(id)arg1 didReceiveProgressInfo:(id)arg2 error:(id)arg3;
- (id /* block */)perThumbnailCompletionBlock;
- (id /* block */)perThumbnailWithVersionCompletionBlock;
- (void)setPerThumbnailCompletionBlock:(id /* block */)arg1;
- (void)setPerThumbnailWithVersionCompletionBlock:(id /* block */)arg1;
- (void)setThumbnailsFetchCompletionBlock:(id /* block */)arg1;
- (id /* block */)thumbnailsFetchCompletionBlock;

@end
