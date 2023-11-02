
@interface ICQAsyncImageView : UIImageView {
    NSURL * _currentImageURL;
}

@property (nonatomic, retain) NSURL *currentImageURL;

- (void).cxx_destruct;
- (id)currentImageURL;
- (id)initWithURL:(id)arg1;
- (void)loadImageFromURL:(id)arg1;
- (void)setCurrentImageURL:(id)arg1;
- (void)updateToImageFromURL:(id)arg1;

@end
