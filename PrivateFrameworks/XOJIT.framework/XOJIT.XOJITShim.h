
@interface XOJIT.XOJITShim : NSObject {
    void jit;
}

- (void).cxx_destruct;
- (bool)addWithPtr:(const char *)arg1 size:(long long)arg2;
- (id)init;
- (id)initFromXPCConnection:(id)arg1;
- (id)initFromXPCConnection:(id)arg1 fromOOPJITLinkageType:(int)arg2;
- (unsigned long long)lookupWithSymbolName:(id)arg1;

@end
