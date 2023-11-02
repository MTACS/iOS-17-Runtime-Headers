
@interface ISPlayerContent : NSObject {
    struct CGImage { } * _photo;
    int  _photoEXIFOrientation;
    bool  _photoHasColorAdjustments;
    bool  _photoIsOriginal;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _photoTime;
    bool  _supportsVitality;
    NSNumber * _variationIdentifier;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoDuration;
    AVPlayerItem * _videoPlayerItem;
}

@property (nonatomic, readonly) struct CGImage { }*photo;
@property (nonatomic, readonly) int photoEXIFOrientation;
@property (nonatomic, readonly) bool photoHasColorAdjustments;
@property (nonatomic, readonly) bool photoIsOriginal;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoTime;
@property (nonatomic, readonly) bool supportsVitality;
@property (nonatomic, readonly) NSNumber *variationIdentifier;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } videoDuration;
@property (nonatomic, readonly) AVPlayerItem *videoPlayerItem;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithPhoto:(struct CGImage { }*)arg1 photoIsOriginal:(bool)arg2 photoEXIFOrientation:(int)arg3 photoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 videoDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 photoHasColorAdjustments:(bool)arg6 videoPlayerItem:(id)arg7 variationIdentifier:(id)arg8 supportsVitality:(bool)arg9;
- (bool)isEqual:(id)arg1;
- (struct CGImage { }*)photo;
- (int)photoEXIFOrientation;
- (bool)photoHasColorAdjustments;
- (bool)photoIsOriginal;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoTime;
- (bool)supportsVitality;
- (id)variationIdentifier;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoDuration;
- (id)videoPlayerItem;

@end
