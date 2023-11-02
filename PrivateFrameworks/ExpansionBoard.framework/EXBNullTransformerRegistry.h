
@interface EXBNullTransformerRegistry : NSObject <EXBDisplayTransformerRegistry, FBSDisplayTransformer> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_identifierToTransformers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addTransformer:(id)arg1 withIdentifier:(id)arg2;
- (id)init;
- (id)transformDisplayConfiguration:(id)arg1;

@end
