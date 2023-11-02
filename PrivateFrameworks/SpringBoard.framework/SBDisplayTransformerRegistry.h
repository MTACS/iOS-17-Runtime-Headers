
@interface SBDisplayTransformerRegistry : NSObject <EXBDisplayTransformerRegistry, FBSDisplayTransformer> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _lock_transformers;
    <SBFBDisplayManagerTransformUpdating> * _overrideTransformUpdater;
    <BSInvalidatable> * _stateCaptureToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_initWithOverrideTransformUpdater:(id)arg1;
- (id)_lock_description;
- (id)addTransformer:(id)arg1 withIdentifier:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)transformDisplayConfiguration:(id)arg1;
- (id)transformUpdater;

@end
