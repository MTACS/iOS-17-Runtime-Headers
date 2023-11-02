
@interface RBSProcessBeforeTranslocationBundlePathPredicate : RBSProcessStringPredicate {
    NSString * _beforeTranslocationBundlePath;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (id)beforeTranslocationBundlePath;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (bool)matchesProcess:(id)arg1;

@end
