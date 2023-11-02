
@interface RBProcessStateChangeSet : NSObject <NSFastEnumeration> {
    NSMutableDictionary * _stateChangesByIdentity;
}

@property (nonatomic, readonly) bool hasChanges;

- (void).cxx_destruct;
- (void)applyChanges:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (bool)hasChanges;
- (id)initWithChanges:(id)arg1;
- (id)initWithOriginalStatesByIdentity:(id)arg1 updatedStatesByIdentity:(id)arg2;
- (id)processIdentities;
- (id)processStateChangeForIdentity:(id)arg1;

@end
