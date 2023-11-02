
@interface CKVSpanMatcherFactory : NSObject {
    CKVIndexManager * _indexManager;
    CKVSettings * _settings;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithIndexManager:(id)arg1 settings:(id)arg2;
- (id)makeSpanMatcher;

@end
