
@interface SKUIDownloadsView : UIView {
    UIView * _contentView;
    UIView * _overlayView;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIView *overlayView;

- (void).cxx_destruct;
- (id)contentView;
- (void)layoutSubviews;
- (id)overlayView;
- (void)setContentView:(id)arg1;
- (void)setOverlayView:(id)arg1;

@end
