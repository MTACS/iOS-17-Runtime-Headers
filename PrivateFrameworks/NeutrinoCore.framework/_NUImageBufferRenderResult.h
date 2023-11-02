
@interface _NUImageBufferRenderResult : _NUImageRenderResult <NUImageBufferRenderResult> {
    NUStorageImageBuffer * _buffer;
}

@property (retain) NUStorageImageBuffer *buffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NUImageGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) NURegion *region;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buffer;
- (id)debugDescription;
- (void)setBuffer:(id)arg1;

@end
