
@interface PPEventKitImporter : NSObject {
    Class  _dataDetectorMatchClass;
    PPLocalEventStore * _eventStore;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _fullImportInProgress;
    PPLocalLocationStore * _locationStore;
    PPLocalNamedEntityStore * _namedEntityStore;
    PPNamedEntityDissector * _neDissector;
    PPSQLDatabase * _sqlDatabase;
    PPLocalTopicStore * _topicStore;
    SGURLDissector * _urlDissector;
    SGSqlEntityStore * _urlStore;
}

+ (id)defaultInstance;

- (void).cxx_destruct;
- (bool)deleteAndReimportAllData;
- (void)importChangedEvents:(id)arg1;
- (void)importEvent:(id)arg1;
- (id)importEventData;
- (id)importEventDataWithShouldContinueBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithEventStore:(id)arg1 namedEntityStore:(id)arg2 locationStore:(id)arg3 topicStore:(id)arg4 urlStore:(id)arg5 urlDissector:(id)arg6 namedEntityDissector:(id)arg7 dataDetectorMatchClass:(Class)arg8 sqlDatabase:(id)arg9;

@end
