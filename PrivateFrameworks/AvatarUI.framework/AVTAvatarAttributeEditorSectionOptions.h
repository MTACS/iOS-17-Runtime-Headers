
@interface AVTAvatarAttributeEditorSectionOptions : NSObject {
    unsigned long long  _displayMode;
    NSString * _framingMode;
    AVTAvatarPose * _poseOverride;
    NSArray * _presetOverrides;
    bool  _showsLabel;
    AVTStickerConfiguration * _stickerConfiguration;
}

@property (nonatomic, readonly) unsigned long long displayMode;
@property (nonatomic, readonly, copy) NSString *framingMode;
@property (nonatomic, readonly, copy) AVTAvatarPose *poseOverride;
@property (nonatomic, readonly, copy) NSArray *presetOverrides;
@property (nonatomic, readonly) bool showsLabel;
@property (nonatomic, readonly, copy) AVTStickerConfiguration *stickerConfiguration;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)displayMode;
- (id)framingMode;
- (id)initWithFramingMode:(id)arg1 poseOverride:(id)arg2 presetOverrides:(id)arg3 displayMode:(unsigned long long)arg4 stickerConfiguration:(id)arg5 showsLabel:(bool)arg6;
- (id)poseOverride;
- (id)presetOverrides;
- (bool)showsLabel;
- (id)stickerConfiguration;
- (id)stringForDisplayMode;

@end
