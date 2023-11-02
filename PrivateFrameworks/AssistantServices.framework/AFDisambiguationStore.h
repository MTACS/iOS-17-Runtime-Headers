
@interface AFDisambiguationStore : NSObject {
    AFManagedStorageConnection * _store;
}

- (void).cxx_destruct;
- (id)_store;
- (id)infoForIdentifier:(id)arg1;
- (void)reset;
- (void)saveInfo:(id)arg1 forIdentifier:(id)arg2;

@end