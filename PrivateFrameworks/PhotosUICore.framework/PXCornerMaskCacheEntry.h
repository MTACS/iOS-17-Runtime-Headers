
@interface PXCornerMaskCacheEntry : NSObject {
    struct { 
        union { 
            struct { 
                float topLeft; 
                float topRight; 
                float bottomLeft; 
                float bottomRight; 
            } ; 
            float byIndex[4]; 
        } ; 
    }  _cornerRadius;
    UIImage * _image;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; } cornerRadius;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })cornerRadius;
- (id)description;
- (id)image;
- (id)initWithCornerRadius:(struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })arg1 size:(struct CGSize { double x1; double x2; })arg2 image:(id)arg3;
- (struct CGSize { double x1; double x2; })size;

@end
