
@interface MTDBConfig : NSObject <MTCoreDataContainerConfigProvider> {
    NSManagedObjectModel * _model;
}

@property (nonatomic, retain) NSManagedObjectModel *model;

- (void).cxx_destruct;
- (id)databaseFileUrl;
- (id)managedObjectModel;
- (id)model;
- (id)persistentStoreOptions;
- (void)setModel:(id)arg1;

@end
