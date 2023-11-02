
@interface CKLabel : UILabel {
    bool  _shouldHaveRotatedTitleIconImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _textRectForAccessoryImageView;
    long long  _titleIconImageType;
    NSSet * _titleIconImageTypesSupportingRotation;
    UIImageView * _titleIconImageView;
}

@property (nonatomic) bool shouldHaveRotatedTitleIconImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } textRectForAccessoryImageView;
@property (nonatomic) long long titleIconImageType;
@property (nonatomic, retain) NSSet *titleIconImageTypesSupportingRotation;
@property (nonatomic, retain) UIImageView *titleIconImageView;

- (void).cxx_destruct;
- (void)_rotateTitleIconImageView;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)hasAccessoryImageView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isLTR;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectToDrawTextInForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShouldHaveRotatedTitleIconImage:(bool)arg1;
- (void)setShouldHaveRotatedTitleIconImage:(bool)arg1 animated:(bool)arg2;
- (void)setTextColor:(id)arg1;
- (void)setTextRectForAccessoryImageView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitleIconImageType:(long long)arg1;
- (void)setTitleIconImageTypesSupportingRotation:(id)arg1;
- (void)setTitleIconImageView:(id)arg1;
- (bool)shouldHaveRotatedTitleIconImage;
- (struct CGSize { double x1; double x2; })sizeOfAccessoryImageView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForAccessoryImageView;
- (long long)titleIconImageType;
- (bool)titleIconImageTypeSupportsRotation:(long long)arg1;
- (id)titleIconImageTypesSupportingRotation;
- (id)titleIconImageView;

@end
