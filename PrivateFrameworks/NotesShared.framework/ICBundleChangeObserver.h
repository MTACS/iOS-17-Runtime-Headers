
@interface ICBundleChangeObserver : NSObject {
    id /* block */  _attachmentDidChange;
    bool  _didAddForExistingPaperAttachments;
    id /* block */  _didChangeFilePresenters;
    bool  _isObserving;
    NSManagedObjectContext * _managedObjectContext;
    NSMutableDictionary * _mutableFilePresenters;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
    NSObject<OS_dispatch_queue> * _processingQueue;
}

@property (nonatomic, copy) id /* block */ attachmentDidChange;
@property (nonatomic) bool didAddForExistingPaperAttachments;
@property (nonatomic, copy) id /* block */ didChangeFilePresenters;
@property (nonatomic) bool isObserving;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSMutableDictionary *mutableFilePresenters;
@property (nonatomic, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;

- (void).cxx_destruct;
- (void)addManagedObjectContextDidSaveObserver;
- (void)addObserverForBundleWithObjectID:(id)arg1 url:(id)arg2;
- (void)addObserversForExistingPaperAttachments;
- (void)addObserversForObjects:(id)arg1;
- (id /* block */)attachmentDidChange;
- (void)contextDidSave:(id)arg1;
- (bool)didAddForExistingPaperAttachments;
- (id /* block */)didChangeFilePresenters;
- (id)filePresenters;
- (id)init;
- (id)initWithPersistentStoreCoordinator:(id)arg1 managedObjectContext:(id)arg2;
- (bool)isObserving;
- (id)managedObjectContext;
- (id)mutableFilePresenters;
- (id)persistentStoreCoordinator;
- (void)processObjectIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)processingQueue;
- (void)removeManagedObjectContextDidSaveObserver;
- (void)removeObserverForBundleWithURL:(id)arg1;
- (void)setAttachmentDidChange:(id /* block */)arg1;
- (void)setDidAddForExistingPaperAttachments:(bool)arg1;
- (void)setDidChangeFilePresenters:(id /* block */)arg1;
- (void)setIsObserving:(bool)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (void)setMutableFilePresenters:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)start;
- (void)stop;
- (void)stopAndNotifyObservers:(bool)arg1;

@end
