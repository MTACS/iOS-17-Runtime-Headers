
@interface HDBackgroundObservationServerExtensionManager : NSObject {
    NSMutableDictionary * _availableExtensions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (id)extensionForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)init;

@end
