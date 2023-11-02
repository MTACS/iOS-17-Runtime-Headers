
@interface FCTagBanner : NSObject {
    FCAssetHandle * _assetHandle;
    struct FCEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) FCAssetHandle *assetHandle;
@property (nonatomic, readonly) struct FCEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)assetHandle;
- (id)initWithAssetHandle:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 insets:(struct FCEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (struct FCEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (struct CGSize { double x1; double x2; })size;

@end
