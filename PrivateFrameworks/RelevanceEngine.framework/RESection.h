
@interface RESection : NSObject <RESectionDelegate, RESectionProperties> {
    bool  _allowsSubsections;
    NSMutableArray * _batchBlocks;
    REMLElementComparator * _comparator;
    <RESectionDelegate> * _delegate;
    _RESectionDescriptor * _descriptor;
    NSMutableDictionary * _elements;
    NSMutableSet * _hiddenElements;
    bool  _performingBatch;
    REElementQueue * _queue;
    NSMutableDictionary * _subsections;
}

@property (nonatomic, readonly) NSArray *allElements;
@property (nonatomic, copy) REMLElementComparator *comparator;
@property (nonatomic, readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RESectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *elements;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maximumElements;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long visibleCount;

- (void).cxx_destruct;
- (void)_addElement:(id)arg1 forceHidden:(bool)arg2;
- (long long)_compareElement:(id)arg1 toElement:(id)arg2 level:(unsigned long long)arg3;
- (id)_createSectionForGroup:(id)arg1;
- (id)_groupForIdentifier:(id)arg1;
- (id)_groupIdentifierForElement:(id)arg1;
- (long long)_mappedIndexFromIndex:(long long)arg1;
- (void)_performOrEnqueueBlock:(id /* block */)arg1;
- (void)_removeElementWithId:(id)arg1;
- (void)_removeSection:(id)arg1;
- (void)_updateElementWithId:(id)arg1 withNewFeatureSet:(id)arg2 forceHidden:(bool)arg3;
- (void)addElement:(id)arg1 forceHidden:(bool)arg2;
- (id)allElements;
- (id)comparator;
- (bool)containsElementWithId:(id)arg1;
- (long long)count;
- (id)delegate;
- (id)elementIdAtIndex:(unsigned long long)arg1;
- (id)elements;
- (long long)indexOfElementWithId:(id)arg1;
- (id)initWithSectionDescriptor:(id)arg1 comparator:(id)arg2;
- (long long)maximumElements;
- (id)name;
- (void)performBatchUpdates:(id /* block */)arg1;
- (void)removeElementWithId:(id)arg1;
- (id)section:(id)arg1 groupForIdentifier:(id)arg2;
- (void)sectionDidUpdateContentOrder:(id)arg1;
- (void)setComparator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaximumElements:(long long)arg1;
- (void)updateElementWithId:(id)arg1 withNewFeatureSet:(id)arg2 forceHidden:(bool)arg3;
- (long long)visibleCount;

@end
