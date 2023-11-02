
@interface VCPMADResourceLock : NSObject {
    VCPMADResource * _resource;
    VCPMADResourceManager * _resourceManager;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithResourceManager:(id)arg1 andResource:(id)arg2;
- (void)reset;

@end
