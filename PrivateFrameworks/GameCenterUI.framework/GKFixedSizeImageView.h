
@interface GKFixedSizeImageView : UIImageView {
    UIImage * _actualImage;
}

@property (nonatomic, retain) UIImage *actualImage;

- (void).cxx_destruct;
- (id)actualImage;
- (id)image;
- (void)invalidateIntrinsicContentSize;
- (void)setActualImage:(id)arg1;
- (void)setImage:(id)arg1;

@end
