
@interface RCPersistentContainer : NSObject {
    NSPersistentContainer * _persistentContainer;
    NSPersistentStore * _store;
    NSString * _transactionAuthor;
    bool  _viewContextIsConfigured;
}

@property (nonatomic, readonly) NSPersistentContainer *persistentContainer;
@property (nonatomic, readonly) NSPersistentStore *store;
@property (nonatomic, readonly) NSString *transactionAuthor;

+ (id)storeDescriptionForURL:(id)arg1 isXPCClient:(bool)arg2 configuration:(id)arg3;

- (void).cxx_destruct;
- (void)_configureContext:(id)arg1 isViewContext:(bool)arg2;
- (id)initWithURL:(id)arg1;
- (id)loadStore:(id)arg1 error:(id*)arg2;
- (id)newBackgroundModel;
- (id)newContextWithConcurrencyType:(unsigned long long)arg1;
- (id)persistentContainer;
- (id)store;
- (id)storeDescriptionWithURL:(id)arg1;
- (id)transactionAuthor;

@end
