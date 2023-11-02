
@interface MKMapItemMetadataImageRequest : MKMapItemMetadataRequest {
    id /* block */  _imageHandler;
    GEOPhotoInfo * _info;
}

@property (nonatomic, copy) id /* block */ imageHandler;
@property (nonatomic, retain) GEOPhotoInfo *info;

+ (id)requestWithMapItem:(id)arg1 info:(id)arg2;

- (void).cxx_destruct;
- (void)handleData:(id)arg1;
- (void)handleError:(id)arg1;
- (id /* block */)imageHandler;
- (id)info;
- (void)setImageHandler:(id /* block */)arg1;
- (void)setInfo:(id)arg1;
- (id)url;

@end
