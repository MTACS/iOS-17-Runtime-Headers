
@interface _PXCuratedLibraryLayoutAssetsSnapshot : NSObject {
    PXAssetsDataSource * _dataSource;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _fullyVisibleRect;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    NSDictionary * _spriteSnapshotIndexByAssetIdentifier;
    struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; float x2; bool x3; } * _spriteSnapshots;
    long long  _spriteSnapshotsCapacity;
    long long  _spriteSnapshotsCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
    long long  _zoomLevel;
}

@property (nonatomic, retain) <NSCopying> *dominantAssetIdentifier;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } fullyVisibleRect;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property (nonatomic, readonly) long long zoomLevel;

- (void).cxx_destruct;
- (long long)_addSpriteSnapshot:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; float x2; bool x3; })arg1;
- (id)assetIdentifierForAssetReference:(id)arg1;
- (void)dealloc;
- (id)dominantAssetIdentifier;
- (void)enumerateAssetIdentifiersUsingBlock:(id /* block */)arg1;
- (void)enumerateAssetInfoForGeometries:(const struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg1 styles:(const struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)arg2 infos:(const struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg3 count:(unsigned int)arg4 options:(unsigned long long)arg5 usingBlock:(id /* block */)arg6;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullyVisibleRect;
- (id)initWithLayout:(id)arg1;
- (struct CGPoint { double x1; double x2; })offset;
- (void)setDominantAssetIdentifier:(id)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; float x2; bool x3; })spriteSnapshotForAssetWithIdentifier:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (long long)zoomLevel;

@end
