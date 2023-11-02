
@interface CKVIndexUpdaterFactory : NSObject {
    CKVIndexManager * _indexManager;
    CKVSettings * _settings;
    double  _timeout;
}

- (void).cxx_destruct;
- (id)initWithIndexManager:(id)arg1 settings:(id)arg2 timeout:(double)arg3;
- (id)updaterForRequest:(id)arg1;

@end
