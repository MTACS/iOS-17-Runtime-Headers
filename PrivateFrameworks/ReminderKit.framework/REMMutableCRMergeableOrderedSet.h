
@interface REMMutableCRMergeableOrderedSet : NSObject <CRUndoDelegate, REMReplicaIDHelperOwner> {
    REMMutableCRUndo * _currentUndo;
    CRDocument * _document;
    REMReplicaIDHelper * _replicaIDHelper;
    REMReplicaIDSource * _replicaIDSource;
    <REMReplicaManagerProviding> * _replicaManagerProvider;
    NSMutableArray * _undos;
}

@property (nonatomic, retain) REMMutableCRUndo *currentUndo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CRDocument *document;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) REMReplicaIDHelper *replicaIDHelper;
@property (nonatomic, retain) REMReplicaIDSource *replicaIDSource;
@property (nonatomic, retain) <REMReplicaManagerProviding> *replicaManagerProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *undos;

- (void).cxx_destruct;
- (id)addObject:(id)arg1;
- (void)addUndoCommandsForObject:(id)arg1 block:(id /* block */)arg2;
- (id)currentUndo;
- (id)description;
- (id)document;
- (id)documentToEdit;
- (id)immutableOrderedSet;
- (id)initWithReplicaIDSource:(id)arg1 immutableDocumentToEdit:(id)arg2 undos:(id)arg3;
- (id)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)moveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)removeObjectAtIndex:(unsigned long long)arg1;
- (id)replicaIDHelper;
- (void)replicaIDHelperDidAcquireReplicaUUID:(id)arg1;
- (id)replicaIDSource;
- (id)replicaManagerProvider;
- (void)setCurrentUndo:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setReplicaIDHelper:(id)arg1;
- (void)setReplicaIDSource:(id)arg1;
- (void)setReplicaManagerProvider:(id)arg1;
- (void)undo;
- (void)undo:(id)arg1;
- (id)undos;
- (bool)wantsUndoCommands;

@end
