
@interface SFProcessDictionary : NSObject {
    unsigned long long  _cacheCapacity;
    NSMutableSet * _pidsPendingTermination;
    RBSProcessMonitor * _processMonitor;
    NSMutableArray * _recentlyReferencedPIDs;
    NSCountedSet * _references;
    NSMutableDictionary * _values;
}

@property (nonatomic, readonly) unsigned long long cacheCapacity;

- (void).cxx_destruct;
- (void)_handleProcessStateUpdate:(int)arg1 state:(unsigned char)arg2;
- (void)_removeUnreferencedObjectsIfNeeded;
- (void)_removeValuesForPID:(id)arg1;
- (void)_updateInterestedApplications;
- (unsigned long long)cacheCapacity;
- (void)dealloc;
- (void)decrementReferenceForPID:(int)arg1;
- (id)incrementReferenceForPID:(int)arg1 additionalKey:(id)arg2 valueCreationBlock:(id /* block */)arg3;
- (id)incrementReferenceForPID:(int)arg1 valueCreationBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithCacheCapacity:(unsigned long long)arg1;

@end
