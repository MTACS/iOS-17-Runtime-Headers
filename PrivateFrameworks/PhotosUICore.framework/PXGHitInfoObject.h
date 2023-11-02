
@interface PXGHitInfoObject : NSObject {
    struct { 
        unsigned int spriteIndex; 
        double paddedDistance; 
        double unpaddedDistance; 
        struct { 
            struct { 
                double x; 
                double y; 
                double z; 
            } center; 
            /* Warning: Unrecognized filer type: '}' using 'void*' */ void*size; 
        } geometry; 
    }  _hitInfo;
}

@property (nonatomic, readonly) struct { unsigned int x1; double x2; double x3; struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_4_1_1; } x4; }*hitInfo;

- (long long)compare:(id)arg1;
- (struct { unsigned int x1; double x2; double x3; struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_4_1_1; } x4; }*)hitInfo;
- (id)init;
- (id)initWithHitInfo:(struct { unsigned int x1; double x2; double x3; struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_4_1_1; } x4; })arg1;

@end
