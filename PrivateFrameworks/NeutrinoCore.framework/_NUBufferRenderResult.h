
@interface _NUBufferRenderResult : _NUImageRenderResult <NUBufferRenderResult> {
    <NUBufferImage> * _image;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NUImageGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (retain) <NUBufferImage> *image;
@property (readonly) NURegion *region;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)image;
- (void)setImage:(id)arg1;

@end
