
@interface ASCImageRenderer : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _capInsets;
    long long  _renderingMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } capInsets;
@property (nonatomic, readonly) long long renderingMode;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (id)bundleImageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)systemImageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })capInsets;
- (id)description;
- (unsigned long long)hash;
- (id)imageWithActions:(id /* block */)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 capInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 renderingMode:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)renderingMode;
- (struct CGSize { double x1; double x2; })size;

@end
