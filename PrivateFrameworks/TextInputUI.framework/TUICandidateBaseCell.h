
@interface TUICandidateBaseCell : UICollectionViewCell {
    UIImageView * _backgroundImageView;
    <TUICandidateViewStyle> * _style;
}

@property (nonatomic, retain) UIImageView *backgroundImageView;
@property (nonatomic, retain) <TUICandidateViewStyle> *style;

- (void).cxx_destruct;
- (id)backgroundImageView;
- (id)cellBackgroundColor;
- (id)cellBackgroundImage;
- (void)setBackgroundImageView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setStyle:(id)arg1;
- (id)style;
- (void)updateBackground:(id)arg1 color:(id)arg2;
- (void)updateColors;

@end
