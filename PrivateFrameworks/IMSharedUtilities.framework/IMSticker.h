
@interface IMSticker : NSObject {
    NSString * _accessibilityLabel;
    NSURL * _animatedImageCacheURLFromExtension;
    NSDictionary * _attributionInfo;
    NSString * _ballonBundleID;
    NSString * _externalURI;
    NSURL * _fileURL;
    unsigned long long  _initialFrameIndex;
    NSData * _metadata;
    NSString * _moodCategory;
    NSData * _recipe;
    NSArray * _representations;
    long long  _stickerEffectType;
    NSString * _stickerGUID;
    NSString * _stickerName;
    NSString * _stickerPackGUID;
    NSString * _textToSpeechName;
    NSString * _uniqueID;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSURL *animatedImageCacheURLFromExtension;
@property (nonatomic, copy) NSDictionary *attributionInfo;
@property (nonatomic, copy) NSString *ballonBundleID;
@property (nonatomic, copy) NSString *externalURI;
@property (nonatomic, readonly, copy) NSURL *fileURL;
@property (nonatomic, readonly, copy) UIImage *image;
@property (nonatomic) unsigned long long initialFrameIndex;
@property (nonatomic, readonly) bool isEmojiSticker;
@property (nonatomic, copy) NSData *metadata;
@property (nonatomic, copy) NSString *moodCategory;
@property (nonatomic, retain) NSData *recipe;
@property (nonatomic, copy) NSArray *representations;
@property (nonatomic) long long stickerEffectType;
@property (nonatomic, readonly, copy) NSString *stickerGUID;
@property (nonatomic, copy) NSString *stickerName;
@property (nonatomic, copy) NSString *stickerPackGUID;
@property (nonatomic, readonly, copy) NSString *textToSpeechName;
@property (nonatomic, readonly) NSString *uniqueID;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; })geometryDescriptorFromUserInfoDictionary:(id)arg1;
+ (id)userInfoDictionaryWithGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; })arg1;
+ (id)userInfoDictionaryWithLayoutIntent:(unsigned long long)arg1 parentPreviewWidth:(double)arg2 xScalar:(double)arg3 yScalar:(double)arg4 scale:(double)arg5 rotation:(double)arg6 initialFrameIndex:(unsigned long long)arg7;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)animatedImageCacheURLFromExtension;
- (id)attributionInfo;
- (id)ballonBundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)externalURI;
- (id)fileURL;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStickerID:(id)arg1 stickerPackID:(id)arg2 fileURL:(id)arg3 accessibilityLabel:(id)arg4 moodCategory:(id)arg5 stickerName:(id)arg6;
- (id)initWithStickerID:(id)arg1 stickerPackID:(id)arg2 fileURL:(id)arg3 accessibilityLabel:(id)arg4 moodCategory:(id)arg5 stickerName:(id)arg6 textToSpeechName:(id)arg7;
- (id)initWithStickerIdentifier:(id)arg1 stickerPackID:(id)arg2 representations:(id)arg3 effectType:(long long)arg4 initialFrameIndex:(unsigned long long)arg5 externalURI:(id)arg6 stickerName:(id)arg7 accessibilityLabel:(id)arg8 metadata:(id)arg9;
- (id)initWithStickerPropertyDictionary:(id)arg1 stickerPackID:(id)arg2 stickerPackBundlePath:(id)arg3;
- (unsigned long long)initialFrameIndex;
- (bool)isEmojiSticker;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)moodCategory;
- (id)recipe;
- (id)representations;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAnimatedImageCacheURLFromExtension:(id)arg1;
- (void)setAttributionInfo:(id)arg1;
- (void)setBallonBundleID:(id)arg1;
- (void)setExternalURI:(id)arg1;
- (void)setInitialFrameIndex:(unsigned long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMoodCategory:(id)arg1;
- (void)setRecipe:(id)arg1;
- (void)setRepresentations:(id)arg1;
- (void)setStickerEffectType:(long long)arg1;
- (void)setStickerName:(id)arg1;
- (void)setStickerPackGUID:(id)arg1;
- (long long)stickerEffectType;
- (id)stickerGUID;
- (id)stickerName;
- (id)stickerPackGUID;
- (id)textToSpeechName;
- (id)uniqueID;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (double)calculatePreviewScaleWithTargetSize:(struct CGSize { double x1; double x2; })arg1 imageData:(id)arg2;

- (double)calculatePreviewScaleWithTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (id)image;
- (id)imageData;
- (bool)prepareToSend;
- (id)stickerView;

@end
