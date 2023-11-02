
@interface PILongExposureRegistrationRequest : NURenderRequest {
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _cleanAperture;
    NSDictionary * _recipe;
}

@property (nonatomic) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } cleanAperture;
@property (nonatomic, copy) NSDictionary *recipe;

- (void).cxx_destruct;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })cleanAperture;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)recipe;
- (void)setCleanAperture:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)setRecipe:(id)arg1;
- (void)submit:(id /* block */)arg1;

@end
