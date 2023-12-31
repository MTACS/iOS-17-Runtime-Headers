
@interface _NUImageDataResult : _NURenderResult <NUImageDataResult> {
    NSDictionary * _data;
    NUImageGeometry * _geometry;
}

@property (copy) NSDictionary *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NUImageGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (id)geometry;
- (void)setData:(id)arg1;
- (void)setGeometry:(id)arg1;

@end
