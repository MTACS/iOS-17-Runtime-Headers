
@interface ADStereoPipelineParameters : ADPipelineParameters {
    unsigned long long  _networkVariantOverride;
}

@property (nonatomic) unsigned long long networkVariantOverride;

- (id)init;
- (unsigned long long)networkVariantOverride;
- (void)setNetworkVariantOverride:(unsigned long long)arg1;

@end
