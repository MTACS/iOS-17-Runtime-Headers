
@interface EspressoNetwork : NSObject {
    struct shared_ptr<Espresso::net> { 
        struct net {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _net;
}

@property (readonly) EspressoContext *ctx;
@property (readonly) unsigned long long layers_size;
@property (readonly) struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; } net;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)ctx;
- (id)initWithJSFile:(const char *)arg1 binSerializerId:(const char *)arg2 context:(id)arg3 computePath:(int)arg4;
- (id)initWithJSFile:(const char *)arg1 context:(id)arg2 computePath:(int)arg3;
- (unsigned long long)layers_size;
- (struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })net;
- (void)wipe_layers_blobs;

@end
