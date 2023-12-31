
@interface NUTagColorSampler : NUColorSampler {
    NSString * _tag;
}

@property (nonatomic, readonly) NSString *tag;

- (void).cxx_destruct;
- (id)_pipelineFilters;
- (id)initWithComposition:(id)arg1 tag:(id)arg2;
- (id)initWithComposition:(id)arg1 tag:(id)arg2 responseQueue:(id)arg3;
- (id)tag;

@end
