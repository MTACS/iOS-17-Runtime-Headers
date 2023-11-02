
@protocol _MKOverlayTileDataSource <NSObject>

@required

- (void)_cancelLoadingTileAtPath:(struct { long long x1; long long x2; long long x3; double x4; })arg1;
- (bool)isGeometryFlipped;
- (void)loadTileAtPath:(void *)arg1 result:(void *)arg2; // needs 2 arg types, found 8: struct { long long x1; long long x2; long long x3; double x4; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*

@end
