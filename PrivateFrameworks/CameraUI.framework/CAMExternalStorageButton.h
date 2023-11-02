
@interface CAMExternalStorageButton : UIButton {
    CAMSlashMaskView * __slashMaskView;
    CAMSlashView * __slashView;
}

@property (nonatomic, readonly) CAMSlashMaskView *_slashMaskView;
@property (nonatomic, readonly) CAMSlashView *_slashView;

- (void).cxx_destruct;
- (id)_formattedTitleString;
- (id)_slashMaskView;
- (id)_slashView;
- (void)_updateSlashVisibility:(bool)arg1 animated:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setSelected:(bool)arg1;

@end
