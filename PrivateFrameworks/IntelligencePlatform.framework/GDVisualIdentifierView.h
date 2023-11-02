
@interface GDVisualIdentifierView : NSObject <GDVisualIdentifierView> {
    <GDViewAccessAssertion> * _accessAssertion;
    _PASSqliteDatabase * _db;
    GDSQLGraphObjectRetriever * _locationRetriever;
    GDSQLGraphObjectRetriever * _personRetriever;
    GDSQLGraphObjectRetriever * _softwareRetriever;
}

- (void).cxx_destruct;
- (void)enumeratePeopleMatchingName:(id)arg1 block:(id /* block */)arg2;
- (void)enumeratePeopleWithBlock:(id /* block */)arg1;
- (id)initWithAccessAssertion:(id)arg1 database:(id)arg2;
- (void)linkEntitiesForPerson:(id)arg1;
- (id)personForIdentifier:(id)arg1;

@end
