
@interface MTLDebugSamplerState : MTLToolsSamplerState {
    MTLSamplerDescriptor * _descriptor;
}

@property (nonatomic, readonly, copy) MTLSamplerDescriptor *descriptor;

- (void)dealloc;
- (id)description;
- (id)descriptor;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithSamplerState:(id)arg1 descriptor:(id)arg2 device:(id)arg3;

@end
