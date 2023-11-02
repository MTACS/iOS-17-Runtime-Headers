
@interface VCPMovieCurationResults : NSObject {
    NSMutableArray * _highlights;
    PHAsset * _phAsset;
    NSMutableDictionary * _results;
}

@property (nonatomic, readonly, retain) NSMutableArray *highlights;
@property (nonatomic, readonly) PHAsset *phAsset;
@property (nonatomic, retain) NSMutableDictionary *results;

- (void).cxx_destruct;
- (id)highlights;
- (id)initWithPHAsset:(id)arg1;
- (id)phAsset;
- (id)results;
- (void)setResults:(id)arg1;

@end
