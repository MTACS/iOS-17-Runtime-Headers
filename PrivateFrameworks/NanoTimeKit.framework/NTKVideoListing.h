
@interface NTKVideoListing : NSObject <NSCopying, NTKAVListing> {
    long long  _clip;
    CLKDevice * _device;
    NSString * _name;
    UIColor * _overlayColor;
    unsigned long long  _tags;
    unsigned long long  _theme;
    NSString * _transitionImageName;
    long long  _variant;
    CLKVideo * _video;
    NSString * _videoName;
}

@property (nonatomic, readonly) long long clip;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *overlayColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long theme;
@property (nonatomic, readonly) long long variant;
@property (nonatomic, readonly) CLKVideo *video;

- (void).cxx_destruct;
- (void)_setHasAssets;
- (long long)clip;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)discardAssets;
- (bool)hasTag:(unsigned long long)arg1;
- (id)initForDevice:(id)arg1 withName:(id)arg2 videoName:(id)arg3 transitionImageName:(id)arg4 overlayColor:(id)arg5 theme:(unsigned long long)arg6 variant:(long long)arg7 clip:(long long)arg8 tags:(unsigned long long)arg9;
- (id)overlayColor;
- (bool)snapshotDiffers:(id)arg1;
- (unsigned long long)theme;
- (long long)variant;
- (id)video;

@end
