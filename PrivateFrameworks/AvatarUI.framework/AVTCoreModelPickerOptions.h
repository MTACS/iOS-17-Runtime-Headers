
@interface AVTCoreModelPickerOptions : NSObject {
    AVTCoreModelPickerDisplayCondition * _displayCondition;
    unsigned long long  _displayMode;
    NSString * _framingMode;
    AVTCoreModelFramingModeOverrides * _framingModeOverrides;
    AVTAvatarPose * _poseOverride;
    NSArray * _presetOverrides;
    bool  _separator;
    bool  _showsLabel;
    unsigned long long  _sortingOption;
    AVTStickerConfiguration * _stickerConfiguration;
}

@property (nonatomic, readonly) AVTCoreModelPickerDisplayCondition *displayCondition;
@property (nonatomic, readonly) unsigned long long displayMode;
@property (nonatomic, readonly, copy) NSString *framingMode;
@property (nonatomic, readonly) AVTCoreModelFramingModeOverrides *framingModeOverrides;
@property (nonatomic, readonly, copy) AVTAvatarPose *poseOverride;
@property (nonatomic, readonly, copy) NSArray *presetOverrides;
@property (nonatomic, readonly) bool separator;
@property (nonatomic, readonly) bool showsLabel;
@property (nonatomic, readonly) unsigned long long sortingOption;
@property (nonatomic, readonly) AVTStickerConfiguration *stickerConfiguration;

+ (unsigned long long)displayModeFromString:(id)arg1;
+ (unsigned long long)sortingOptionFromString:(id)arg1;

- (void).cxx_destruct;
- (id)displayCondition;
- (unsigned long long)displayMode;
- (id)framingMode;
- (id)framingModeOverrides;
- (id)initWithFramingMode:(id)arg1 separatorFlag:(bool)arg2 presetOverrides:(id)arg3 poseOverride:(id)arg4 framingModeOverrides:(id)arg5 displayMode:(unsigned long long)arg6 displayCondition:(id)arg7 sortingOption:(unsigned long long)arg8 stickerConfiguration:(id)arg9 showsLabel:(bool)arg10;
- (id)poseOverride;
- (id)presetOverrides;
- (bool)separator;
- (bool)showsLabel;
- (unsigned long long)sortingOption;
- (id)stickerConfiguration;

@end
