
@interface JFXMediaItem : NSObject <NSCopying> {
    <JFXMediaItemDelegate> * _delegate;
    int  _durationAt30fps;
    long long  _interfaceOrientationForDisplay;
    long long  _mediaLoadState;
    long long  _mediaState;
    long long  _mediaType;
}

@property (nonatomic, readonly) PVColorSpace *colorSpace;
@property (nonatomic) <JFXMediaItemDelegate> *delegate;
@property (nonatomic) int durationAt30fps;
@property (nonatomic) long long interfaceOrientationForDisplay;
@property (nonatomic) long long mediaLoadState;
@property (nonatomic) long long mediaState;
@property (nonatomic) long long mediaType;
@property (nonatomic, readonly) int playableMediaContentMode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canBeAddedToSequence;
- (bool)canHaveFilter;
- (bool)canSaveToCameraRoll;
- (id)colorSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)durationAt30fps;
- (bool)hasAudibleCharacteristic;
- (bool)hasPhotoCharacteristic;
- (bool)hasVisualCharacteristic;
- (unsigned long long)hash;
- (id)info;
- (id)init;
- (id)initWithInfo:(id)arg1 delegate:(id)arg2;
- (long long)interfaceOrientationForDisplay;
- (bool)isEqual:(id)arg1;
- (long long)mediaLoadState;
- (long long)mediaState;
- (long long)mediaType;
- (int)playableMediaContentMode;
- (void)setDelegate:(id)arg1;
- (void)setDurationAt30fps:(int)arg1;
- (void)setInterfaceOrientationForDisplay:(long long)arg1;
- (void)setMediaLoadState:(long long)arg1;
- (void)setMediaState:(long long)arg1;
- (void)setMediaType:(long long)arg1;

@end
