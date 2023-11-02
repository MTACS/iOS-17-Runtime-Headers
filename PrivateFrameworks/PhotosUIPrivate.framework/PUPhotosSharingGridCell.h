
@interface PUPhotosSharingGridCell : UICollectionViewCell {
    long long  _currentImageRequestID;
    UIView * _highlightOverlayView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastZoomPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalZoomPoint;
    PUPhotoView * _photoView;
    PUPhotosZoomingSharingGridCell * _zoomingCell;
    UIView * _zoomingCellSuperview;
}

@property (nonatomic) long long currentImageRequestID;
@property (nonatomic, readonly) PUPhotoView *photoView;

- (void).cxx_destruct;
- (void)_updateHighlight;
- (void)_updateSubviewOrdering;
- (long long)currentImageRequestID;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)photoView;
- (void)prepareForReuse;
- (void)setCurrentImageRequestID:(long long)arg1;
- (void)setHighlighted:(bool)arg1;

@end
