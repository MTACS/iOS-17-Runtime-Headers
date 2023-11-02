
@interface SWDatastoreManager : NSObject <SWDatastoreManager> {
    <SWDatastoreSynchronizationManager> * _datastoreSynchronizationManager;
    <SWDocumentStateProviding> * _documentStateProvider;
    <SWLogger> * _logger;
    NSHashTable * _observers;
    SWDatastore * _privateDatastore;
}

@property (nonatomic, readonly) SWDatastore *datastore;
@property (nonatomic, readonly) <SWDatastoreSynchronizationManager> *datastoreSynchronizationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SWDocumentStateProviding> *documentStateProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SWLogger> *logger;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, retain) SWDatastore *privateDatastore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)datastore;
- (id)datastoreSynchronizationManager;
- (id)documentStateProvider;
- (id)initWithLogger:(id)arg1 documentStateProvider:(id)arg2 datastoreSynchronizationManager:(id)arg3;
- (id)logger;
- (id)observers;
- (id)privateDatastore;
- (void)removeObserver:(id)arg1;
- (void)reset;
- (void)setPrivateDatastore:(id)arg1;
- (void)updateDatastore:(id)arg1 originatingSession:(id)arg2 completion:(id /* block */)arg3;
- (void)updateDatastore:(id)arg1 originatingSession:(id)arg2 forceUpdate:(bool)arg3 completion:(id /* block */)arg4;

@end
