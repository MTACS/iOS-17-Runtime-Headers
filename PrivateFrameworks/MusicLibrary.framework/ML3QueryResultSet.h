
@interface ML3QueryResultSet : NSObject <NSCopying> {
    ML3QueryResultSet_BackingStore * _backingStore;
    NSObject<OS_dispatch_queue> * _fixedPriorityQueue;
    long long  _localRevision;
    ML3Query * _query;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _revision;
    bool  _supportsIncrementalUpdate;
    NSMutableArray * _updateToLibraryCurrentRevisionCompletionBlocks;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) long long localRevision;
@property (nonatomic, readonly) ML3Query *query;
@property (nonatomic, readonly) long long revision;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void).cxx_destruct;
- (id)_initWithQuery:(id)arg1 supportsIncrementalUpdate:(bool)arg2;
- (void)_loadCurrentFullResults;
- (void)_mergeChangesWithFromNewPIDs:(const void*)arg1 changedPIDs:(void*)arg2;
- (void)_onQueueAddUpdateFinishedBlock:(id /* block */)arg1;
- (void)_onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:(bool)arg1;
- (bool)_updateToLibraryCurrentRevision;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)entityLimit;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionsUsingBlock:(id /* block */)arg1;
- (id)initWithQuery:(id)arg1;
- (long long)localRevision;
- (long long)persistentIDAtIndex:(unsigned long long)arg1;
- (id)query;
- (long long)revision;
- (bool)updateToLibraryCurrentRevision;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void)enumerateSectionHeadersUsingBlock:(id /* block */)arg1;
- (id)sectionIndexTitles;

@end
