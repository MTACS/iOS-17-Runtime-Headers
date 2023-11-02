
@protocol TVPPlaybackImageLoader <NSObject>

@required

- (void)cancelImageLoadingForIdentifiers:(NSArray *)arg1;
- (double)closestImageTimeForTime:(double)arg1;
- (void)invalidate;
- (NSArray *)loadImagesForTimes:(void *)arg1 maxSize:(void *)arg2 withHandler:(void *)arg3; // needs 3 arg types, found 11: NSArray *, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, UIImage *, double, double, void*

@end
