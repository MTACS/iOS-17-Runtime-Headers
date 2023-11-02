
@interface JFXCachedAnimojiImage : NSObject {
    PVImageBuffer * _animojiImageBuffer;
    NSDictionary * _animojiRenderAttributes;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _mediaTimeRange;
}

@property (nonatomic, readonly) PVImageBuffer *animojiImageBuffer;
@property (nonatomic, readonly) NSDictionary *animojiRenderAttributes;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } mediaTimeRange;

- (void).cxx_destruct;
- (id)animojiImageBuffer;
- (id)animojiRenderAttributes;
- (id)description;
- (id)initWithMediaTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 animojiRenderingAttributes:(id)arg2 animojiImageBuffer:(id)arg3;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaTimeRange;

@end
