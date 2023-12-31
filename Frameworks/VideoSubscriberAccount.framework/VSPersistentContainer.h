
@interface VSPersistentContainer : NSObject {
    long long  _modelVersion;
    NSPersistentContainer * _persistentContainer;
    NSManagedObjectContext * _viewContext;
}

@property (nonatomic, readonly) long long modelVersion;
@property (nonatomic, retain) NSPersistentContainer *persistentContainer;
@property (nonatomic, retain) NSManagedObjectContext *viewContext;

+ (id)directoryURL;
+ (id)legacyDirectoryURL;

- (void).cxx_destruct;
- (id)developerIdentityProviderFetchRequest;
- (id)init;
- (id)initWithModelVersion:(long long)arg1;
- (id)insertDeveloperIdentityProviderInContext:(id)arg1;
- (void)migrateContainerIfNecessary;
- (long long)modelVersion;
- (void)performBlock:(id /* block */)arg1;
- (id)persistentContainer;
- (void)setPersistentContainer:(id)arg1;
- (void)setViewContext:(id)arg1;
- (id)viewContext;

@end
