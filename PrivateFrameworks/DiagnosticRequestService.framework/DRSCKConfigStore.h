
@interface DRSCKConfigStore : NSObject {
    NSPersistentContainer * _container;
    NSManagedObjectContext * _context;
    bool  _isReadOnly;
    NSString * _workingDirectory;
}

@property (nonatomic, readonly) NSPersistentContainer *container;
@property (nonatomic, readonly) NSManagedObjectContext *context;
@property (nonatomic, readonly) bool isReadOnly;
@property (nonatomic, readonly) NSString *workingDirectory;

- (void).cxx_destruct;
- (id)_currentConfig_ON_MOC_QUEUE:(id*)arg1;
- (id)container;
- (id)context;
- (id)currentConfig:(id*)arg1;
- (id)initWithWorkingDirectory:(id)arg1 isReadOnly:(bool)arg2 errorOut:(id*)arg3;
- (bool)isReadOnly;
- (bool)resetToDefaultWithErrorOut:(id*)arg1;
- (bool)saveConfig:(id)arg1 errorOut:(id*)arg2;
- (id)workingDirectory;

@end
