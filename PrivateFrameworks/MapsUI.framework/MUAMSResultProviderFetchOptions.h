
@interface MUAMSResultProviderFetchOptions : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _artworkSize;
    double  _displayScale;
    long long  _source;
}

@property (nonatomic) struct CGSize { double x1; double x2; } artworkSize;
@property (nonatomic) double displayScale;
@property (nonatomic) long long source;

- (struct CGSize { double x1; double x2; })artworkSize;
- (double)displayScale;
- (id)initWithDisplayScale:(double)arg1 artworkSize:(struct CGSize { double x1; double x2; })arg2 source:(long long)arg3;
- (void)setArtworkSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setSource:(long long)arg1;
- (long long)source;

@end
