
@protocol MRUArtworkViewObservable <NSObject>

@required

- (void)addObserver:(id <MRUArtworkViewObserver>)arg1;
- (UIImage *)artworkImage;
- (void)removeObserver:(id <MRUArtworkViewObserver>)arg1;

@end
