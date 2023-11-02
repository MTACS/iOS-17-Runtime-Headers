
@interface CKConversationListAccessoryViewConfiguration : NSObject <NSCopying> {
    UIColor * _backgroundColor;
    UIBlurEffect * _blurEffect;
    UIImage * _image;
    UIColor * _tintColor;
    long long  _vibrancyStyle;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIBlurEffect *blurEffect;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) long long vibrancyStyle;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)blurEffect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)image;
- (void)setBackgroundColor:(id)arg1;
- (void)setBlurEffect:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setVibrancyStyle:(long long)arg1;
- (id)tintColor;
- (long long)vibrancyStyle;

@end
