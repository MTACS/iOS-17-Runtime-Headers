
@interface AMDCoreDataPersistentContainer : NSObject {
    NSPersistentContainer * __container;
    NSManagedObjectContext * __moc;
}

@property (nonatomic, retain) NSPersistentContainer *_container;
@property (nonatomic, retain) NSManagedObjectContext *_moc;

+ (id)sharedContainer;

- (void).cxx_destruct;
- (id)_container;
- (id)_moc;
- (id)getManagedObjectContext;
- (void)save:(id*)arg1;
- (void)set_container:(id)arg1;
- (void)set_moc:(id)arg1;

@end
