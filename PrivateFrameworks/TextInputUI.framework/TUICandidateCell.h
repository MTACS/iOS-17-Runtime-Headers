
@interface TUICandidateCell : TUICandidateBaseCell {
    long long  _alignment;
    TUICandidateLabel * _alternativeTextLabel;
    TUICandidateLabel * _annotationTextLabel;
    TIKeyboardCandidate * _candidate;
    unsigned long long  _candidateNumber;
    UILabel * _candidateNumberLabel;
    UIImageView * _imageView;
    double  _minimumTextLabelHeight;
    bool  _rowSelected;
    bool  _shouldShowCandidateNumber;
    TUICandidateLabel * _textLabel;
}

@property (nonatomic) long long alignment;
@property (nonatomic, retain) TUICandidateLabel *alternativeTextLabel;
@property (nonatomic, retain) TUICandidateLabel *annotationTextLabel;
@property (nonatomic, retain) TIKeyboardCandidate *candidate;
@property (nonatomic) unsigned long long candidateNumber;
@property (nonatomic, retain) UILabel *candidateNumberLabel;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) double minimumTextLabelHeight;
@property (nonatomic) bool rowSelected;
@property (nonatomic) bool shouldShowCandidateNumber;
@property (nonatomic, retain) TUICandidateLabel *textLabel;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })outsetsForText:(id)arg1 font:(id)arg2;
+ (id)reuseIdentifier;
+ (double)widthForCandidate:(id)arg1 showCandidateNumber:(bool)arg2 style:(id)arg3;
+ (double)widthForText:(id)arg1 font:(id)arg2 layoutOrientation:(long long)arg3;

- (void).cxx_destruct;
- (bool)_canFocusProgrammatically;
- (void)_computeImageViewFrame;
- (long long)alignment;
- (id)alternativeTextLabel;
- (id)annotationTextLabel;
- (void)applyLayoutAttributes:(id)arg1;
- (id)candidate;
- (unsigned long long)candidateNumber;
- (id)candidateNumberLabel;
- (id)cellBackgroundColor;
- (id)cellBackgroundImage;
- (void)commonInit;
- (void)flipHorizontallyForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (id)image;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFocused;
- (void)layoutSubviews;
- (double)minimumTextLabelHeight;
- (void)prepareForReuse;
- (void)rotateBy90DegreesForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (bool)rowSelected;
- (void)setAlignment:(long long)arg1;
- (void)setAlternativeTextLabel:(id)arg1;
- (void)setAnnotationTextLabel:(id)arg1;
- (void)setCandidate:(id)arg1;
- (void)setCandidateNumber:(unsigned long long)arg1;
- (void)setCandidateNumberLabel:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setMinimumTextLabelHeight:(double)arg1;
- (void)setRowSelected:(bool)arg1;
- (void)setShouldShowCandidateNumber:(bool)arg1;
- (void)setStyle:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (bool)shouldShowCandidateNumber;
- (id)textLabel;
- (void)updateColors;
- (void)updateLabels;
- (void)updateStyle;

@end
