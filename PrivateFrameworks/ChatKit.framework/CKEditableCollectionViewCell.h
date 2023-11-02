
@interface CKEditableCollectionViewCell : UICollectionViewCell {
    bool  __ck_editing;
    UIImageView * _checkmark;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentAlignmentRect;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    long long  _editingStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _marginInsets;
    bool  _shouldReturnActualVEV;
}

@property (getter=_ck_isEditing, setter=_ck_setEditing:, nonatomic) bool _ck_editing;
@property (nonatomic, retain) UIImageView *checkmark;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentAlignmentInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentAlignmentRect;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) long long editingStyle;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic) bool shouldReturnActualVEV;

+ (Class)_contentViewClass;

- (void).cxx_destruct;
- (bool)_ck_isEditing;
- (void)_ck_setEditing:(bool)arg1;
- (void)_ck_setEditing:(bool)arg1 animated:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_horizontalSafeAreaInsets;
- (id)checkmark;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentAlignmentInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentAlignmentRect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)contentView;
- (id)description;
- (long long)editingStyle;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (void)setCheckmark:(id)arg1;
- (void)setContentAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEditingStyle:(long long)arg1;
- (void)setEffect:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSelected:(bool)arg1;
- (void)setShouldReturnActualVEV:(bool)arg1;
- (bool)shouldReturnActualVEV;
- (void)updateCheckmarkImage;

@end
