
@interface SBFluidSwitcherSpaceTitleItem : NSObject <NSCopying> {
    SBDisplayItem * _displayItem;
    UIImage * _image;
    bool  _showsMultiWindowIndicator;
    long long  _subtitleInterfaceStyle;
    NSString * _subtitleText;
    NSString * _titleText;
    UIColor * _titleTextColor;
}

@property (nonatomic, readonly) SBDisplayItem *displayItem;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool showsMultiWindowIndicator;
@property (nonatomic) long long subtitleInterfaceStyle;
@property (nonatomic, copy) NSString *subtitleText;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, retain) UIColor *titleTextColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayItem;
- (unsigned long long)hash;
- (id)image;
- (id)initWithDisplayItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setShowsMultiWindowIndicator:(bool)arg1;
- (void)setSubtitleInterfaceStyle:(long long)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (bool)showsMultiWindowIndicator;
- (long long)subtitleInterfaceStyle;
- (id)subtitleText;
- (id)titleText;
- (id)titleTextColor;

@end
