
@interface RBBundlePropertiesBSXPCProvider : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _propertiesByIdentifier;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)init;
- (id)propertiesForIdentifier:(id)arg1;
- (void)removePropertiesForIdentifier:(id)arg1;

@end
