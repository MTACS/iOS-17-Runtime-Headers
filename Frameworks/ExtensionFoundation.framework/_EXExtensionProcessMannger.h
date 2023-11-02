
@interface _EXExtensionProcessMannger : NSObject <_EXExtensionProcessObserver> {
    NSMapTable * _processExtensionMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _processExtensionMapLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMapTable *processExtensionMap;
@property struct os_unfair_lock_s { unsigned int x1; } processExtensionMapLock;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)processDidInvalidate:(id)arg1;
- (id)processExtensionMap;
- (struct os_unfair_lock_s { unsigned int x1; })processExtensionMapLock;
- (id)processWithLaunchConfiguration:(id)arg1 error:(id*)arg2;
- (void)setProcessExtensionMap:(id)arg1;
- (void)setProcessExtensionMapLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;

@end
