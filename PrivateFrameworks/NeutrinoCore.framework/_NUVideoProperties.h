
@interface _NUVideoProperties : NSObject <NUVideoProperties> {
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
    NSDictionary * _colorProperties;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _livePhotoKeyFrameTime;
    NSArray * _metadata;
    long long  _orientation;
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _originalCleanAperture;
    struct { 
        long long width; 
        long long height; 
    }  _originalSize;
    struct { 
        long long width; 
        long long height; 
    }  _size;
    NSArray * _trackGroups;
    NSURL * _url;
}

@property (nonatomic) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } cleanAperture;
@property (nonatomic, retain) NSDictionary *colorProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (readonly) unsigned long long hash;
@property (readonly) bool isHDR;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } livePhotoKeyFrameTime;
@property (nonatomic, copy) NSArray *metadata;
@property (nonatomic) long long orientation;
@property (nonatomic) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } originalCleanAperture;
@property (nonatomic) struct { long long x1; long long x2; } originalSize;
@property (nonatomic) struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *trackGroups;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })cleanAperture;
- (id)colorProperties;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)initWithProperties:(id)arg1;
- (bool)isHDR;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })livePhotoKeyFrameTime;
- (id)metadata;
- (long long)orientation;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })originalCleanAperture;
- (struct { long long x1; long long x2; })originalSize;
- (void)setCleanAperture:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)setColorProperties:(id)arg1;
- (void)setDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLivePhotoKeyFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMetadata:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOriginalCleanAperture:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)setOriginalSize:(struct { long long x1; long long x2; })arg1;
- (void)setSize:(struct { long long x1; long long x2; })arg1;
- (void)setTrackGroups:(id)arg1;
- (void)setUrl:(id)arg1;
- (struct { long long x1; long long x2; })size;
- (id)trackGroups;
- (id)url;

@end
