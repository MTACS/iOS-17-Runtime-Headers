
@interface MTLAccelerationStructurePassDescriptorInternal : MTLAccelerationStructurePassDescriptor {
    bool  _enableSubstreams;
}

@property (nonatomic) bool enableSubstreams;

- (bool)enableSubstreams;
- (id)init;
- (void)setEnableSubstreams:(bool)arg1;

@end
