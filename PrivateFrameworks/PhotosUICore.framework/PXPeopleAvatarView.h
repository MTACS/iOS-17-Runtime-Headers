
@interface PXPeopleAvatarView : UIImageView {
    unsigned long long  _avatarSizeClass;
    bool  _enabled;
    UIImage * _firstAvatar;
    UIGraphicsImageRenderer * _imageRenderer;
    bool  _isRTL;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _ivarLock;
    CAShapeLayer * _overlayLayer;
    UIImage * _secondAvatar;
    PHAssetCollection * _sharedAlbumCollection;
    UIImage * _thirdAvatar;
}

@property (nonatomic) unsigned long long avatarSizeClass;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) UIImage *firstAvatar;
@property (nonatomic, retain) UIGraphicsImageRenderer *imageRenderer;
@property (readonly) NSObject<OS_os_log> *log;
@property (nonatomic, retain) CAShapeLayer *overlayLayer;
@property (nonatomic, retain) UIImage *secondAvatar;
@property (nonatomic, retain) PHAssetCollection *sharedAlbumCollection;
@property (nonatomic, retain) UIImage *thirdAvatar;

+ (struct CGSize { double x1; double x2; })_sizeForNumberOfAvatars:(unsigned long long)arg1 diameter:(double)arg2;
+ (struct CGSize { double x1; double x2; })maxSizeForSizeClass:(unsigned long long)arg1;
+ (id)serialQueue;

- (void).cxx_destruct;
- (void)_generateAvatars;
- (void)_renderAvatarsForAlbumCollection:(id)arg1;
- (void)_requestSubscriberMonogram:(id)arg1 diameter:(double)arg2 resultHandler:(id /* block */)arg3;
- (void)_resetImages;
- (void)_resetViewContents;
- (void)_resetViewContentsIfNeededForAlbumCollection:(id)arg1;
- (void)_setContentsImage:(id)arg1 withShadowPath:(struct CGPath { }*)arg2 forAlbumCollection:(id)arg3;
- (void)_setImage:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)_setImage:(id)arg1 forIndex:(long long)arg2 albumCollection:(id)arg3;
- (void)_updateAvatars;
- (void)accessibilityInvertColorsStatusDidChange:(id)arg1;
- (unsigned long long)avatarSizeClass;
- (void)embedInView:(id)arg1;
- (id)firstAvatar;
- (id)imageRenderer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (id)log;
- (id)overlayLayer;
- (void)prepareForReuse;
- (id)secondAvatar;
- (void)setAvatarSizeClass:(unsigned long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFirstAvatar:(id)arg1;
- (void)setImageRenderer:(id)arg1;
- (void)setOverlayLayer:(id)arg1;
- (void)setSecondAvatar:(id)arg1;
- (void)setSharedAlbumCollection:(id)arg1;
- (void)setSharedAlbumCollection:(id)arg1 forceLayoutSubscriberAvatars:(bool)arg2;
- (void)setThirdAvatar:(id)arg1;
- (id)sharedAlbumCollection;
- (id)thirdAvatar;

@end
