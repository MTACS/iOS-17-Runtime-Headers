
@interface PISourceSampler : NUColorSampler <PITagColorSampler>

@property (nonatomic, readonly) NSString *tag;

- (id)_pipelineFilters;
- (id)tag;

@end
