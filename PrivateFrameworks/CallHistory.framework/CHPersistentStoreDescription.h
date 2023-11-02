
@interface CHPersistentStoreDescription : NSPersistentStoreDescription {
    CHPersistentStoreDescription * _defaultPersistentStoreDescription;
}

@property (readonly) CHPersistentStoreDescription *defaultPersistentStoreDescription;

+ (id)persistentStoreDescriptionWithURL:(id)arg1;

- (void).cxx_destruct;
- (id)defaultPersistentStoreDescription;

@end
