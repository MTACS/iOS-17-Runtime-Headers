
@interface StockGraphImageSet : NSObject {
    UIImage * _highlightOverlayImage;
    UIImage * _lineGraphImage;
    UIImage * _volumeGraphImage;
}

@property (nonatomic, retain) UIImage *highlightOverlayImage;
@property (nonatomic, retain) UIImage *lineGraphImage;
@property (nonatomic, retain) UIImage *volumeGraphImage;

- (void).cxx_destruct;
- (id)highlightOverlayImage;
- (id)lineGraphImage;
- (void)setHighlightOverlayImage:(id)arg1;
- (void)setLineGraphImage:(id)arg1;
- (void)setVolumeGraphImage:(id)arg1;
- (id)volumeGraphImage;

@end
