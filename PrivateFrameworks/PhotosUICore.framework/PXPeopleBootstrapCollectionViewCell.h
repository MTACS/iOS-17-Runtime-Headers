
@interface PXPeopleBootstrapCollectionViewCell : UICollectionViewCell {
    UIImageView * _badgeView;
    struct CGSize { 
        double width; 
        double height; 
    }  _checkmarkImageSize;
    bool  _confirmed;
    PXPersonImageRequest * _imageRequest;
    UIImageView * _imageView;
    bool  _isMergeCandidate;
    bool  _isVerified;
    unsigned long long  _presentationStatus;
    UIView * _selectedCheckmarkView;
    UIView * _unselectedCheckmarkView;
}

@property (nonatomic, readonly) UIImageView *badgeView;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } checkmarkImageSize;
@property (nonatomic) bool confirmed;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) PXPersonImageRequest *imageRequest;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) bool isMergeCandidate;
@property (nonatomic) bool isVerified;
@property (nonatomic) unsigned long long presentationStatus;
@property (nonatomic, readonly) UIView *selectedCheckmarkView;
@property (nonatomic, readonly) UIView *unselectedCheckmarkView;

+ (id)cloudBadgeImage;

- (void).cxx_destruct;
- (bool)_isRTL;
- (void)_updateCellSizing;
- (id)badgeView;
- (struct CGSize { double x1; double x2; })checkmarkImageSize;
- (bool)confirmed;
- (id)image;
- (id)imageRequest;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isMergeCandidate;
- (bool)isVerified;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (unsigned long long)presentationStatus;
- (id)selectedCheckmarkView;
- (void)setConfirmed:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setImageRequest:(id)arg1;
- (void)setIsMergeCandidate:(bool)arg1;
- (void)setIsVerified:(bool)arg1;
- (void)setPresentationStatus:(unsigned long long)arg1;
- (id)unselectedCheckmarkView;

@end
