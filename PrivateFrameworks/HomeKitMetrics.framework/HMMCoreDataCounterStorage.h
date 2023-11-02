
@interface HMMCoreDataCounterStorage : NSObject {
    NSManagedObjectContext * _currentContext;
    long long  _currentContextToken;
    NSString * _dataModelName;
    NSString * _path;
    NSPersistentContainer * _persistentContainer;
    long long  _persistentContainerToken;
}

@property (nonatomic, readonly) NSString *dataModelName;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSPersistentContainer *persistentContainer;

- (void).cxx_destruct;
- (id)currentContext;
- (id)dataModelName;
- (void)executeWithManagedObjectContext:(id /* block */)arg1;
- (void)executeWithManagedObjectContextAndWait:(id /* block */)arg1;
- (id)initWithModelName:(id)arg1 atPath:(id)arg2;
- (id)path;
- (id)persistentContainer;
- (void)save;

@end
