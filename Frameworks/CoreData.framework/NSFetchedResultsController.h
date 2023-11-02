
@interface NSFetchedResultsController : NSObject {
    NSString * _cacheName;
    id  _cachePath;
    id  _delegate;
    NSFetchRequest * _fetchRequest;
    id  _fetchedObjects;
    struct _fetchResultsControllerFlags { 
        unsigned int _changedResultsSinceLastSave : 1; 
        unsigned int _hasBatchedArrayResults : 1; 
        unsigned int _hasMutableFetchedResults : 1; 
        unsigned int _hasSections : 1; 
        unsigned int _sectionKeyPathIsObject : 1; 
        unsigned int _includesSubentities : 1; 
        unsigned int _sendDidChangeContentDiffNotifications : 1; 
        unsigned int _sendDidChangeContentNotifications : 1; 
        unsigned int _sendDidChangeContentSnapshotNotifications : 1; 
        unsigned int _sendObjectChangeNotifications : 1; 
        unsigned int _sendSectionChangeNotifications : 1; 
        unsigned int _sendSectionIndexTitleForSectionName : 1; 
        unsigned int _sendWillChangeContentNotifications : 1; 
        unsigned int _usesNonpersistedProperties : 1; 
        unsigned int _reservedFlags : 18; 
    }  _flags;
    NSMutableDictionary * _indexCache;
    NSMutableArray * _indexCacheOffsets;
    NSManagedObjectContext * _managedObjectContext;
    NSPredicate * _originalPredicate;
    NSPredicate * _remappedPredicate;
    id  _sectionIndexTitles;
    id  _sectionIndexTitlesSections;
    NSString * _sectionNameKey;
    NSString * _sectionNameKeyPath;
    NSMutableOrderedSet * _sections;
    NSMutableDictionary * _sectionsByName;
    id  _sortKeys;
}

@property (nonatomic, readonly) NSString *cacheName;
@property (nonatomic) <NSFetchedResultsControllerDelegate> *delegate;
@property (nonatomic, readonly) NSFetchRequest *fetchRequest;
@property (nonatomic, readonly) NSArray *fetchedObjects;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly, copy) NSDictionary *rc_sectionsByName;
@property (nonatomic, readonly) NSArray *sectionIndexTitles;
@property (nonatomic, readonly) NSString *sectionNameKeyPath;
@property (nonatomic, readonly) NSArray *sections;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

+ (void)deleteCacheWithName:(id)arg1;
+ (void)initialize;

- (id)_fetchedObjects;
- (void)_managedObjectContextDidChange:(id)arg1;
- (void)_managedObjectContextDidChangeObjectIDs:(id)arg1;
- (void)_managedObjectContextDidMutateObjectIDs:(id)arg1;
- (void)_managedObjectContextDidSave:(id)arg1;
- (id)cacheName;
- (void)dealloc;
- (id)delegate;
- (id)fetchRequest;
- (id)fetchedObjects;
- (id)indexPathForObject:(id)arg1;
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4;
- (id)managedObjectContext;
- (id)objectAtIndexPath:(id)arg1;
- (bool)performFetch:(id*)arg1;
- (long long)sectionForSectionIndexTitle:(id)arg1 atIndex:(long long)arg2;
- (id)sectionIndexTitleForSectionName:(id)arg1;
- (id)sectionIndexTitles;
- (id)sectionNameKeyPath;
- (id)sections;
- (void)setDelegate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (id)rc_sectionsByName;

@end
