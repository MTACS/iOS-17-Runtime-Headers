
@interface PIRAWTempTintSampler : NUTagColorSampler <PITagColorSampler>

@property (nonatomic, readonly) NSString *tag;

- (id)_pipelineFilters;
- (id)initWithComposition:(id)arg1 responseQueue:(id)arg2;
- (id)tag;

@end
