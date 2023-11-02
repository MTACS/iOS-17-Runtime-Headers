
@interface PKStrokeSpatialCache : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedBounds;
    PKDrawing * _cachedDrawing;
    long long  _currentGenerationCount;
    <PKStrokeSpatialCacheDelegate> * _delegate;
    id /* block */  _generateOnscreenVisibleStrokesBlock;
    bool  _hasValidOnscreenVisibleStrokes;
    NSArray * _onscreenVisibleStrokes;
    NSObject<OS_dispatch_queue> * _onscreenVisibleStrokesQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
