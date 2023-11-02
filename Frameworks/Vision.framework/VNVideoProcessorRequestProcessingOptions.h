
@interface VNVideoProcessorRequestProcessingOptions : NSObject <NSCopying> {
    VNVideoProcessorCadence * _cadence;
}

@property (copy) VNVideoProcessorCadence *cadence;

- (void).cxx_destruct;
- (id)_createVCPVideoProcessorRequestConfiguration;
- (id)cadence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setCadence:(id)arg1;

@end
