
@interface BWMonocularDepthConfiguration : BWInferenceConfiguration {
    long long  _depthPrioritization;
    unsigned int  _monocularDepthType;
}

@property (nonatomic, readonly) long long depthPrioritization;
@property (nonatomic, readonly) unsigned int monocularDepthType;

- (long long)depthPrioritization;
- (id)initWithInferenceType:(int)arg1 monocularDepthType:(unsigned int)arg2;
- (unsigned int)monocularDepthType;

@end
