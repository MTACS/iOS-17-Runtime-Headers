
@interface SKUIGalleryPaneViewController : UIViewController {
    SKUIMediaComponent * _component;
    long long  _galleryIndex;
}

@property (nonatomic, readonly) SKUIMediaComponent *component;
@property (nonatomic, readonly) long long galleryIndex;
@property (nonatomic, readonly) SKUIEmbeddedMediaView *mediaView;

- (void).cxx_destruct;
- (id)component;
- (long long)galleryIndex;
- (id)initWithMediaComponent:(id)arg1 galleryIndex:(long long)arg2;
- (id)mediaView;

@end
