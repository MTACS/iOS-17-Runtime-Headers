
@interface ICNotesCrossProcessChangeCoordinator : NSObject {
    NSManagedObjectContext * _destinationContext;
    NSPersistentStoreCoordinator * _sourceCoordinator;
}

@property (nonatomic, retain) NSManagedObjectContext *destinationContext;
@property (nonatomic, retain) NSPersistentStoreCoordinator *sourceCoordinator;

- (void).cxx_destruct;
- (void)dealloc;
- (id)destinationContext;
- (id)initWithSourceCoordinator:(id)arg1 destinationContext:(id)arg2;
- (void)postAccountDidChangeNotification;
- (void)postCrossProcessNotificationName:(id)arg1;
- (void)postEditorExtensionDidSaveNotification;
- (void)registerForAccountNotifications;
- (void)registerForCrossProcessNotificationName:(id)arg1 block:(id /* block */)arg2;
- (void)registerForEditorExtensionDidSaveNotificationWithBlock:(id /* block */)arg1;
- (void)setDestinationContext:(id)arg1;
- (void)setSourceCoordinator:(id)arg1;
- (id)sourceCoordinator;

@end
