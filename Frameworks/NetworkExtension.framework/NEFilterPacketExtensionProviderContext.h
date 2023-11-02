
@interface NEFilterPacketExtensionProviderContext : NEFilterExtensionProviderContext {
    NSMutableDictionary * _interposes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_nw_interpose> * _nw_interpose;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)dealloc;
- (id)extensionPoint;
- (Class)requiredProviderSuperClass;
- (void)startFilterWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopWithReason:(int)arg1;

@end
