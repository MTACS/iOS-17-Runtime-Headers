
@protocol DOCThumbnail <NSObject>

@required

- (void)addListener:(id <DOCThumbnailListener>)arg1;
- (UIColor *)averageColorInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)hasFinishedTryingToFetchCorrectThumbnail;
- (bool)isLoading;
- (bool)isRepresentativeIcon;
- (bool)registerGenerationCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)removeListener:(id <DOCThumbnailListener>)arg1;
- (void)scheduleUpdateIfNeeded;
- (UIImage *)thumbnail;

@end
