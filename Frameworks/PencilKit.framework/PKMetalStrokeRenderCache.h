
@interface PKMetalStrokeRenderCache : NSObject <PKStrokeRenderCache> {
    NSMutableArray * _buffers;
    PKInk * _ink;
    long long  _renderZoomFactor;
    NSMutableArray * _secondaryBuffers;
    unsigned long long  _totalCost;
}

@property (nonatomic, readonly) NSArray *buffers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKInk *ink;
@property (nonatomic, readonly) NSArray *secondaryBuffers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addBuffer:(id)arg1;
- (void)addSecondaryBuffer:(id)arg1;
- (id)buffers;
- (unsigned long long)cacheCost;
- (id)initWithInk:(id)arg1 renderZoomFactor:(long long)arg2;
- (id)ink;
- (bool)isCompatibleWithInk:(id)arg1 renderZoomFactor:(long long)arg2;
- (bool)lockPurgeableResourcesAddToSet:(id)arg1;
- (bool)needsCompute;
- (id)secondaryBuffers;

@end
