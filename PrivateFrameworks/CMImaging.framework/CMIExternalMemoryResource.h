
@interface CMIExternalMemoryResource : NSObject {
    FigMetalAllocatorBackend * _allocatorBackend;
}

@property (nonatomic, retain) FigMetalAllocatorBackend *allocatorBackend;

- (void).cxx_destruct;
- (id)allocatorBackend;
- (void)setAllocatorBackend:(id)arg1;

@end
