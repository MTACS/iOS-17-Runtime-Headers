
@interface TSKChangeNotifier : NSObject {
    struct __CFDictionary { } * mChangeSourceObservers;
    struct __CFDictionary { } * mChangeSourceOfClassObservers;
    unsigned long long  mProcessingChanges;
    struct __CFArray { } * mQueuedObserverListChanges;
    id  mQueuedObserverLock;
}

- (void)addObserver:(id)arg1 forChangeSource:(id)arg2;
- (void)addObserver:(id)arg1 forChangeSourceOfClass:(Class)arg2;
- (void)asyncProcessChanges:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)p_addObserver:(id)arg1 forChangeSource:(id)arg2 isClass:(bool)arg3;
- (id)p_findCountedObserverForObserver:(id)arg1 inArray:(id)arg2;
- (bool)p_pendingAddOrRemoveOfObserver:(id)arg1 forChangeSource:(id)arg2;
- (void)p_queueObserverListChange:(id)arg1;
- (void)p_removeObserver:(id)arg1 forChangeSource:(id)arg2 isClass:(bool)arg3;
- (void)p_updateObserverList;
- (void)removeObserver:(id)arg1 forChangeSource:(id)arg2;
- (void)removeObserver:(id)arg1 forChangeSourceOfClass:(Class)arg2;
- (void)syncProcessChanges:(id)arg1;

@end
