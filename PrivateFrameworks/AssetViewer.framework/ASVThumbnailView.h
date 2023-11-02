
@interface ASVThumbnailView : UIView <QLPreviewControllerDelegate> {
    ASVThumbnailButton * _button;
    <ASVThumbnailViewDelegate> * _delegate;
    NSLayoutConstraint * _heightButtonConstraint;
    double  _lastRequestedThumbnailScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastRequestedThumbnailSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxThumbnailSize;
    NSOperationQueue * _operationQueue;
    QLItemThumbnailGenerator * _thumbnailGenerator;
    QLItem * _thumbnailItem;
    NSLayoutConstraint * _widthButtonConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASVThumbnailViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } maxThumbnailSize;
@property (readonly) Class superclass;
@property (nonatomic, retain) QLItem *thumbnailItem;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })maxThumbnailSize;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
- (void)previewCurrentItem;
- (void)setDelegate:(id)arg1;
- (void)setMaxThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setThumbnailItem:(id)arg1;
- (id)thumbnailItem;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateThumbnailIfNeeded;

@end
