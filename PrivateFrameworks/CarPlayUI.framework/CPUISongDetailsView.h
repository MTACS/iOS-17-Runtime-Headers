
@interface CPUISongDetailsView : UIView {
    CPUIModernButton * _albumArtistLabelButton;
    _CPUIAlbumContainer * _albumContainer;
    NSString * _albumTitle;
    UILabel * _artistLabel;
    NSString * _artistName;
    unsigned long long  _fontStyle;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumTitleViewSize;
    UIStackView * _stackView;
    CPUITitleView * _titleView;
    NSString * _trackTitle;
}

@property (nonatomic, readonly) CPUIModernButton *albumArtistLabelButton;
@property (nonatomic, retain) _CPUIAlbumContainer *albumContainer;
@property (nonatomic, retain) NSString *albumTitle;
@property (nonatomic, retain) UILabel *artistLabel;
@property (nonatomic, retain) NSString *artistName;
@property (nonatomic) unsigned long long fontStyle;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumTitleViewSize;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, readonly) CPUITitleView *titleView;
@property (nonatomic, retain) NSString *trackTitle;

+ (double)maximumHeightForTrackInfoFontStyle:(unsigned long long)arg1;
+ (double)minimumHeightForTrackInfoFontStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_attributedTitle;
- (void)_updateFont;
- (void)_updateNumberOfLines;
- (id)albumArtistLabelButton;
- (id)albumContainer;
- (id)albumTitle;
- (id)artistLabel;
- (id)artistName;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (unsigned long long)fontStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGSize { double x1; double x2; })maximumTitleViewSize;
- (void)setAlbumContainer:(id)arg1;
- (void)setAlbumTitle:(id)arg1;
- (void)setArtistLabel:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setFontStyle:(unsigned long long)arg1;
- (void)setMaximumTitleViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStackView:(id)arg1;
- (void)setTrackTitle:(id)arg1;
- (id)stackView;
- (id)titleView;
- (id)trackTitle;

@end
