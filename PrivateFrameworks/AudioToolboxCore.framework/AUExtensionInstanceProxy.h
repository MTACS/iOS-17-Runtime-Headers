
@interface AUExtensionInstanceProxy : NSObject {
    void * _auInstance;
}

@property (nonatomic) void*auInstance;

- (void*)auInstance;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAuInstance:(void*)arg1;

@end
