
@interface PBFPriorityQueue : NSObject {
    NSMapTable * _activeItemsForIdentifier;
    NSMapTable * _priorityQueueForIdentifier;
}

@property (nonatomic, readonly, copy) NSSet *activeIdentifiers;
@property (nonatomic, readonly, copy) NSSet *enqueuedIdentifiers;
@property (nonatomic, readonly, copy) NSSet *identifiers;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) unsigned long long numberOfActiveItems;
@property (nonatomic, readonly) unsigned long long numberOfEnqueuedItems;

- (void).cxx_destruct;
- (id)activeIdentifiers;
- (id)activeItemsForIdentifier:(id)arg1;
- (void)enqueueItem:(id)arg1 forIdentifier:(id)arg2;
- (id)enqueuedIdentifiers;
- (id)enqueuedItemsForIdentifier:(id)arg1;
- (id)filterEnqueuedItemForIdentifier:(id)arg1 passingTest:(id /* block */)arg2;
- (id)firstActiveItemForIdentifier:(id)arg1 passingTest:(id /* block */)arg2;
- (id)identifiers;
- (id)init;
- (bool)isEmpty;
- (void)markItemActive:(id)arg1 forIdentifier:(id)arg2;
- (unsigned long long)numberOfActiveItemForIdentifier:(id)arg1;
- (unsigned long long)numberOfActiveItems;
- (unsigned long long)numberOfEnqueuedItems;
- (unsigned long long)numberOfEnqueuedUpItemsForIdentifier:(id)arg1;
- (bool)removeActiveItem:(id)arg1 forIdentifier:(id)arg2;
- (void)removeAllActiveItems;
- (void)removeAllEnqueuedItems;
- (bool)removeEnqueuedItem:(id)arg1 forIdentifier:(id)arg2;
- (void)sortItemsForIdentifier:(id)arg1 usingComparator:(id /* block */)arg2;

@end
