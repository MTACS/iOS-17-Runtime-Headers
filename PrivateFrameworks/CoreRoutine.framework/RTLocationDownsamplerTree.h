
@interface RTLocationDownsamplerTree : NSObject {
    RTLocationDownsamplerTree * _left;
    NSArray * _locations;
    double  _maximumError;
    unsigned long long  _maximumErrorIndex;
    RTLocationDownsamplerTree * _right;
}

@property (nonatomic, retain) RTLocationDownsamplerTree *left;
@property (nonatomic, retain) NSArray *locations;
@property (nonatomic) double maximumError;
@property (nonatomic) unsigned long long maximumErrorIndex;
@property (nonatomic, retain) RTLocationDownsamplerTree *right;

- (void).cxx_destruct;
- (id)allLocations;
- (id)description;
- (double)evaluateLocationsWithErrorFunction:(id /* block */)arg1;
- (id)init;
- (id)initWithLocations:(id)arg1 errorFunction:(id /* block */)arg2;
- (id)left;
- (id)locations;
- (double)maximumError;
- (unsigned long long)maximumErrorIndex;
- (id)right;
- (id)sampledLocations;
- (void)setLeft:(id)arg1;
- (void)setLocations:(id)arg1;
- (void)setMaximumError:(double)arg1;
- (void)setMaximumErrorIndex:(unsigned long long)arg1;
- (void)setRight:(id)arg1;
- (void)splitLocationsWithErrorFunction:(id /* block */)arg1;

@end
