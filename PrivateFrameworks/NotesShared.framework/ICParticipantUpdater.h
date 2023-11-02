
@interface ICParticipantUpdater : NSObject {
    NSManagedObjectContext * _managedObjectContext;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

- (void).cxx_destruct;
- (void)deleteOrphanedParticipantsWithCompletion:(id /* block */)arg1;
- (id)initWithManagedObjectContext:(id)arg1;
- (void)insertMissingParticipantsWithCompletion:(id /* block */)arg1;
- (void)insertParticipantsForNoteObjectID:(id)arg1;
- (id)managedObjectContext;
- (id)missingNoteObjectsIDs;
- (id)serialQueue;
- (void)setSerialQueue:(id)arg1;
- (void)updateWithCompletion:(id /* block */)arg1;

@end
