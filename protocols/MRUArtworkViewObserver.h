
@protocol MRUArtworkViewObserver <NSObject>

@required

- (void)artworkView:(id <MRUArtworkViewObservable>)arg1 didChangeArtworkImage:(UIImage *)arg2;

@end
