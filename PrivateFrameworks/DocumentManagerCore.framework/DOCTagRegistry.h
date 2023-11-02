
@interface DOCTagRegistry : NSObject <DOCTagRegistryProtocol> {
    NSPointerArray * _changeObservers;
    NSMutableOrderedSet * _discoveredTags;
    DOCTagCloudSource * _iCloudDataSource;
    long long  _inBatchUpdateCount;
    int  _localStorageDidUpdateNotifyToken;
    bool  _shouldSynchronizeAfterBatchUpdate;
    long long  _tagSerialNumber;
    NSArray * _tagsBeforeBatchUpdate;
    NSMutableOrderedSet * _userTags;
}

@property (nonatomic, readonly) NSPointerArray *changeObservers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableOrderedSet *discoveredTags;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DOCTagCloudSource *iCloudDataSource;
@property (nonatomic) long long inBatchUpdateCount;
@property (nonatomic) bool shouldSynchronizeAfterBatchUpdate;
@property (readonly) Class superclass;
@property (nonatomic) long long tagSerialNumber;
@property (nonatomic, retain) NSArray *tagsBeforeBatchUpdate;
@property (nonatomic, retain) NSMutableOrderedSet *userTags;

+ (id)sanitizedTagName:(id)arg1;
+ (id)shared;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_allTags;
- (bool)_canAddTag:(id)arg1;
- (void)_enumerateObserversWithBlock:(id /* block */)arg1;
- (id)_memberTag:(id)arg1;
- (void)_notifyDidRemoveTagIfNoLongPresentExistingTags:(id)arg1;
- (id)_setForTagType:(long long)arg1;
- (id)_tagNameForComparing:(id)arg1;
- (void)addChangeObserver:(id)arg1;
- (bool)addTag:(id)arg1;
- (void)addTag:(id)arg1 options:(long long)arg2;
- (void)addTags:(id)arg1 options:(long long)arg2;
- (bool)canReplaceTag:(id)arg1 withTag:(id)arg2;
- (id)changeObservers;
- (void)dealloc;
- (id)discoveredTags;
- (id)iCloudDataSource;
- (bool)inBatchUpdate;
- (long long)inBatchUpdateCount;
- (void)inBatchUpdateEnter;
- (void)inBatchUpdateLeave;
- (id)init;
- (bool)insertTag:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isValidNewTagName:(id)arg1;
- (bool)moveTag:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)notifyObserversDidRemoveTags:(id)arg1;
- (void)notifyObserversDidReplaceTag:(id)arg1 withTag:(id)arg2;
- (void)performBatchUpdate:(id /* block */)arg1;
- (void)removeAllTagsOfType:(long long)arg1;
- (void)removeChangeObserver:(id)arg1;
- (void)removeTags:(id)arg1;
- (bool)replaceTag:(id)arg1 withTag:(id)arg2;
- (void)setDiscoveredTags:(id)arg1;
- (void)setICloudDataSource:(id)arg1;
- (void)setInBatchUpdateCount:(long long)arg1;
- (void)setShouldSynchronizeAfterBatchUpdate:(bool)arg1;
- (void)setTagSerialNumber:(long long)arg1;
- (void)setTagsBeforeBatchUpdate:(id)arg1;
- (void)setUserTags:(id)arg1;
- (bool)shouldSynchronizeAfterBatchUpdate;
- (void)synchronize;
- (id)tagForName:(id)arg1;
- (long long)tagSerialNumber;
- (id)tagsBeforeBatchUpdate;
- (id)userTags;

@end
