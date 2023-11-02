
@interface NCAvatarView : UIView <NSCopying> {
    MTMaterialView * _backgroundMaterialView;
    UIImageView * _imageView;
    bool  _isGeneratingAvatarImage;
    bool  _materialBacked;
    NCNotificationRequest * _notificationRequest;
    double  _pointSize;
    long long  _userInterfaceStyle;
}

@property (getter=isMaterialBacked, nonatomic) bool materialBacked;
@property (nonatomic, readonly) NCNotificationRequest *notificationRequest;
@property (nonatomic, readonly) double pointSize;

+ (bool)isAvatarPossibleWithNotificationRequest:(id)arg1;

- (void).cxx_destruct;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (void)_configureImageViewIfNecessary;
- (void)_loadImage:(id)arg1 needsFormatting:(bool)arg2 animated:(bool)arg3;
- (void)_updateAvatarImageIfNecessary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithNotificationRequest:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 compatibleWithInitialTraitCollection:(id)arg2;
- (id)initWithNotificationRequest:(id)arg1 pointSize:(double)arg2 compatibleWithInitialTraitCollection:(id)arg3;
- (bool)isMaterialBacked;
- (void)layoutSubviews;
- (id)notificationRequest;
- (double)pointSize;
- (void)setMaterialBacked:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
