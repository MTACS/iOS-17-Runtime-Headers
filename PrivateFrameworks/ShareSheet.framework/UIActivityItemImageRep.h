
@interface UIActivityItemImageRep : NSObject {
    id  _asset;
    id /* block */  _dataProvider;
    id /* block */  _thumbnailProvider;
}

@property (nonatomic, retain) id asset;
@property (nonatomic, copy) id /* block */ dataProvider;
@property (nonatomic, copy) id /* block */ thumbnailProvider;

+ (id)activityItemImageRepWithAsset:(id)arg1 thumbnailProvider:(id /* block */)arg2 dataProvider:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)asset;
- (id)data;
- (id /* block */)dataProvider;
- (void)setAsset:(id)arg1;
- (void)setDataProvider:(id /* block */)arg1;
- (void)setThumbnailProvider:(id /* block */)arg1;
- (id)thumbnail;
- (id /* block */)thumbnailProvider;

@end
