
@interface NTKCPhotoListCell : UICollectionViewCell {
    UIView * _content;
    UIImageView * _contentImageView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _crop;
    UIView * _highlightOverlayView;
    unsigned long long  _index;
    UIImageView * _selectionBadge;
    UIView * _selectionOverlayView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } crop;
@property (nonatomic) unsigned long long index;
@property (nonatomic, retain) UIImage *photo;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })crop;
- (unsigned long long)index;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)photo;
- (void)prepareForReuse;
- (void)setCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setPhoto:(id)arg1;
- (void)setSelected:(bool)arg1;

@end
