
@interface GDFeatureView : NSObject <GDFeatureView> {
    <GDViewAccessAssertion> * _accessAssertion;
    _PASSqliteDatabase * _db;
    GDSQLFeatureRetriever * _featureRetriever;
}

- (void).cxx_destruct;
- (id)expectedFeatureKeysWithError:(id*)arg1;
- (id)featureForKey:(id)arg1 error:(id*)arg2;
- (id)featureKeysWithError:(id*)arg1;
- (id)initWithAccessAssertion:(id)arg1 database:(id)arg2;

@end
