
@interface PXSharedLibraryParticipantAddButton : UIButton {
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSizeToAlignWith;
    double  _inset;
}

@property (nonatomic) struct CGSize { double x1; double x2; } imageSizeToAlignWith;
@property (nonatomic) double inset;

- (void)_commonInit;
- (struct CGSize { double x1; double x2; })imageSizeToAlignWith;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)inset;
- (void)layoutSubviews;
- (void)setImageSizeToAlignWith:(struct CGSize { double x1; double x2; })arg1;
- (void)setInset:(double)arg1;

@end
