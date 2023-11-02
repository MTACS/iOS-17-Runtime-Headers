
@interface BLSHLocalCountingAssertionAttributeHandler : BLSHLocalAssertionAttributeHandler {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _countingDictionaryLock;
    NSMutableDictionary * _lock_entryDictionary;
}

+ (Class)attributeBaseClass;
+ (id)attributeClasses;
+ (Class)entryClass;

- (void).cxx_destruct;
- (void)activateWithFirstEntry:(id)arg1;
- (id)countingTargetForEntry:(id)arg1;
- (void)deactivateWithFinalEntry:(id)arg1;
- (id)entriesForCountingTarget:(id)arg1;
- (id)initForService:(id)arg1;

@end
