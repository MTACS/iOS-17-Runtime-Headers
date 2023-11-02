
@interface CNPhotoPickerCollectionViewCell : UICollectionViewCell {
    UILabel * _captionLabel;
    unsigned long long  _cellStyle;
    UIView * _containerContentView;
    UIView * _containerView;
    bool  _displaySelection;
    NSUUID * _displaySessionUUID;
    bool  _displaysBorder;
    CAShapeLayer * _selectionLayer;
}

@property (nonatomic, retain) UILabel *captionLabel;
@property (nonatomic) unsigned long long cellStyle;
@property (nonatomic, retain) UIView *containerContentView;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic) bool displaySelection;
@property (nonatomic, retain) NSUUID *displaySessionUUID;
@property (nonatomic) bool displaysBorder;
@property (nonatomic, retain) CAShapeLayer *selectionLayer;

+ (id)cellIdentifier;
+ (double)cornerRadiusForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forCellStyle:(unsigned long long)arg2;
+ (struct CGPath { }*)selectionPathInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forCellStyle:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)captionLabel;
- (unsigned long long)cellStyle;
- (void)clearContainerViewAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)containerContentView;
- (id)containerView;
- (bool)displaySelection;
- (id)displaySessionUUID;
- (bool)displaysBorder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)selectionLayer;
- (void)setCaptionLabel:(id)arg1;
- (void)setCellStyle:(unsigned long long)arg1;
- (void)setContainerContentView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setDisplaySelection:(bool)arg1;
- (void)setDisplaySessionUUID:(id)arg1;
- (void)setDisplaysBorder:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionLayer:(id)arg1;
- (void)updateBorderTintColor:(id)arg1;
- (void)updateCaptionFrame;
- (void)updateWithCaption:(id)arg1;
- (void)updateWithView:(id)arg1 animation:(unsigned long long)arg2;

@end
