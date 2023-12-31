
@interface MPUBorderDrawingCache : NSObject {
    MPUBorderView * _borderView;
    double  _displayScale;
    NSCache * _images;
}

@property (nonatomic) double displayScale;

- (void).cxx_destruct;
- (void)_applicationDidReceiveMemoryWarning:(id)arg1;
- (id)_borderView;
- (void)_invalidate;
- (void)dealloc;
- (double)displayScale;
- (id)imageForBorderConfiguration:(id)arg1;
- (id)init;
- (void)setDisplayScale:(double)arg1;

@end
