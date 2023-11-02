
@interface _PXFlexMusicCueRequest : NSObject {
    PXFlexMusicAsset * _asset;
    id /* block */  _resultHandler;
}

@property (nonatomic, readonly) PXFlexMusicAsset *asset;
@property (nonatomic, readonly, copy) id /* block */ resultHandler;

- (void).cxx_destruct;
- (id)asset;
- (id)init;
- (id)initWithAsset:(id)arg1 resultHandler:(id /* block */)arg2;
- (id /* block */)resultHandler;

@end
