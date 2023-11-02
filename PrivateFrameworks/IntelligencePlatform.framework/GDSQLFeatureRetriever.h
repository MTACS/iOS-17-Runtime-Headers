
@interface GDSQLFeatureRetriever : NSObject {
    _PASSqliteDatabase * _db;
}

- (void).cxx_destruct;
- (id)featureForKey:(id)arg1 error:(id*)arg2;
- (id)featureKeysWithError:(id*)arg1;
- (id)initWithDatabase:(id)arg1;

@end
