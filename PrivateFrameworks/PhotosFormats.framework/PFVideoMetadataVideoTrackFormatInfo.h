
@interface PFVideoMetadataVideoTrackFormatInfo : NSObject {
    AVAsset * _asset;
    long long  _bitsPerComponent;
    unsigned int  _codec;
    NSString * _colorPrimaries;
    struct CGSize { 
        double width; 
        double height; 
    }  _displaySize;
    bool  _hasDolby8_4Metadata;
    bool  _hasHEVCProfileTierLevelInfo;
    unsigned char  _hevcLevel;
    unsigned char  _hevcProfile;
    unsigned char  _hevcTier;
    bool  _isHDR10;
    bool  _isHighDynamicRange;
    bool  _isProResLOG;
    bool  _isSpatial;
    NSString * _transferFunction;
}

@property (readonly) long long bitsPerComponent;
@property (readonly) unsigned int codec;
@property (readonly) NSString *colorPrimaries;
@property (readonly) struct CGSize { double x1; double x2; } displaySize;
@property (readonly) NSString *formatDebugDescription;
@property (readonly) bool hasDolby8_4Metadata;
@property (readonly) bool hasHEVCProfileTierLevelInfo;
@property (readonly) unsigned char hevcLevel;
@property (readonly) unsigned char hevcProfile;
@property (readonly) unsigned char hevcTier;
@property (readonly) bool isHDR10;
@property (readonly) bool isHighDynamicRange;
@property (readonly) bool isProResLOG;
@property (readonly) bool isSpatial;
@property (readonly) NSString *transferFunction;

+ (short)_getProfile:(char *)arg1 tier:(char *)arg2 level:(char *)arg3 fromFormatDescriptionExtensions:(id)arg4;
+ (id)infoForFirstVideoTrackOfAsset:(id)arg1;
+ (bool)videoTrackFormatDescriptionHasDolby8_4Metadata:(struct opaqueCMFormatDescription { }*)arg1;

- (void).cxx_destruct;
- (void)_checkFormat;
- (long long)bitsPerComponent;
- (unsigned int)codec;
- (id)colorPrimaries;
- (struct CGSize { double x1; double x2; })displaySize;
- (id)formatDebugDescription;
- (bool)hasDolby8_4Metadata;
- (bool)hasHEVCProfileTierLevelInfo;
- (unsigned char)hevcLevel;
- (unsigned char)hevcProfile;
- (id)hevcProfileTierLevelDescription;
- (unsigned char)hevcTier;
- (id)initWithFirstVideoTrackOfAsset:(id)arg1;
- (bool)isHDR10;
- (bool)isHighDynamicRange;
- (bool)isProResLOG;
- (bool)isSpatial;
- (id)transferFunction;

@end
