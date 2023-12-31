
@interface _NUGeometryResult : _NURenderResult <NUGeometryResult> {
    NUImageGeometry * _geometry;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NUImageGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)geometry;
- (void)setGeometry:(id)arg1;

@end
