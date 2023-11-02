
@interface NUMetalRenderer : NURenderer {
    <MTLDevice> * _device;
}

- (void).cxx_destruct;
- (id)imageForSurface:(id)arg1 options:(id)arg2;
- (id)initWithCIContext:(id)arg1 priority:(long long)arg2;
- (id)initWithMetalDevice:(id)arg1 options:(id)arg2;
- (id)name;
- (id)renderDestinationForSurface:(id)arg1;

@end
