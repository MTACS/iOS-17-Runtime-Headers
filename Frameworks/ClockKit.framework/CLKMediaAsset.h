
@interface CLKMediaAsset : NSObject <NSCopying> {
    CLKDevice * _device;
    UIImage * _image;
    double  _stillDisplayTime;
    CLKVideo * _video;
    double  _videoDuration;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) double stillDisplayTime;
@property (nonatomic, readonly) CLKVideo *video;
@property (nonatomic, readonly) double videoDuration;

+ (id)mediaAssetWithImage:(id)arg1 forDevice:(id)arg2;
+ (id)mediaAssetWithVideo:(id)arg1 image:(id)arg2 forDevice:(id)arg3;
+ (id)mediaAssetWithVideo:(id)arg1 image:(id)arg2 videoDuration:(double)arg3 stillDisplayTime:(double)arg4 forDevice:(id)arg5;
+ (id)mediaAssetWithVideoAndImageNamed:(id)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)image;
- (id)initWithImage:(id)arg1 forDevice:(id)arg2;
- (id)initWithVideo:(id)arg1 image:(id)arg2 forDevice:(id)arg3;
- (id)initWithVideo:(id)arg1 image:(id)arg2 videoDuration:(double)arg3 stillDisplayTime:(double)arg4 forDevice:(id)arg5;
- (double)stillDisplayTime;
- (id)video;
- (double)videoDuration;

@end
