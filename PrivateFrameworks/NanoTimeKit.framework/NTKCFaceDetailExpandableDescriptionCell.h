
@interface NTKCFaceDetailExpandableDescriptionCell : NTKCFaceDetailDescriptionCell {
    <NTKCFaceDetailExpandableDescriptionCellDelegate> * _delegate;
    bool  _expanded;
    double  _laidOutWidth;
    UIButton * _moreButton;
    bool  _shouldLayoutText;
}

@property (nonatomic) <NTKCFaceDetailExpandableDescriptionCellDelegate> *delegate;
@property (nonatomic) bool expanded;
@property (nonatomic) double laidOutWidth;
@property (nonatomic, retain) UIButton *moreButton;
@property (nonatomic) bool shouldLayoutText;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_fontSizeDidChange;
- (void)_moreTapped;
- (id)delegate;
- (bool)expanded;
- (id)init;
- (double)laidOutWidth;
- (void)layoutSubviews;
- (id)moreButton;
- (void)prepareForReuse;
- (void)setAttributedText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setLaidOutWidth:(double)arg1;
- (void)setMoreButton:(id)arg1;
- (void)setShouldLayoutText:(bool)arg1;
- (void)setText:(id)arg1;
- (bool)shouldLayoutText;

@end
