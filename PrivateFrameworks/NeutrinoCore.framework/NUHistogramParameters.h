
@interface NUHistogramParameters : NSObject <NSCopying> {
    struct { 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } r; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } g; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } b; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } a; 
    }  _colorMatrix;
}

@property struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; } colorMatrix;

- (struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; })colorMatrix;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)setColorMatrix:(struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; })arg1;

@end
