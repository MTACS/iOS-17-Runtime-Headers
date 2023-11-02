
@interface IRPersistenceStore : NSObject {
    NSPersistentStoreDescription * _storeDescription;
}

@property (readonly) NSDictionary *options;
@property (readonly) NSString *storeType;
@property (readonly) NSURL *url;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (bool)loadWithCoordinator:(id)arg1;
- (id)options;
- (id)storeType;
- (id)url;

@end
