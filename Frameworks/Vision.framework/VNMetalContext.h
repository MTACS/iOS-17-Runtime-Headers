
@interface VNMetalContext : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    <MTLLibrary> * _library;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _wisdomParams;
}

- (void).cxx_destruct;

@end
