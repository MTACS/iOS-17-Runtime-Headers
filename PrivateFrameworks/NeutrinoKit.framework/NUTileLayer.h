
@interface NUTileLayer : CALayer {
    <NUPurgeableSurfaceImage> * _image;
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _imageRect;
}

@property (readonly) <NUPurgeableSurfaceImage> *image;
@property (readonly) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } imageRect;

- (void).cxx_destruct;
- (void)dealloc;
- (id)image;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })imageRect;
- (id)initWithImage:(id)arg1 tile:(id)arg2;

@end
