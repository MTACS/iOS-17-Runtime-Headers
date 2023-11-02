
@interface MNJunctionViewImageLoader : NSObject {
    double  _imageHeight;
    double  _imageWidth;
    NSArray * _preloadEvents;
}

- (void).cxx_destruct;
- (void)_imagesForIDs:(id)arg1 handler:(id /* block */)arg2;
- (id)_imagesForRequest:(id)arg1 response:(id)arg2;
- (id)_stringForImageIDs:(id)arg1;
- (void)imagesForJunctionView:(id)arg1 eventID:(id)arg2 handler:(id /* block */)arg3;
- (id)init;
- (void)setJunctionViewEvents:(id)arg1;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)updateForLocation:(id)arg1 remainingDistanceOnRoute:(double)arg2;

@end
