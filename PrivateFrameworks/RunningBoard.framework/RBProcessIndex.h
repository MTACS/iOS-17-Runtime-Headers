
@interface RBProcessIndex : NSObject <NSFastEnumeration> {
    unsigned long long  _capacity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _processByIdentifier;
    NSMutableDictionary * _processByIdentity;
    NSMutableDictionary * _processByInstance;
    NSMutableOrderedSet * _processes;
}

+ (id)index;
+ (id)indexWithCapacity:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)addProcess:(id)arg1;
- (bool)addProcess:(id)arg1 existingProcess:(out id*)arg2;
- (id)allProcesses;
- (bool)containsIdentifier:(id)arg1;
- (bool)containsIdentity:(id)arg1;
- (bool)containsInstance:(id)arg1;
- (bool)containsProcess:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)init;
- (id)processForIdentifier:(id)arg1;
- (id)processForIdentity:(id)arg1;
- (id)processForInstance:(id)arg1;
- (void)removeAllObjects;
- (bool)removeProcess:(id)arg1;

@end
