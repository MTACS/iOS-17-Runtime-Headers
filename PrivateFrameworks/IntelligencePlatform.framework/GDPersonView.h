
@interface GDPersonView : NSObject <GDPersonView> {
    <GDViewAccessAssertion> * _accessAssertion;
    _PASSqliteDatabase * _db;
    GDSQLGraphObjectRetriever * _personRetriever;
}

- (void).cxx_destruct;
- (void)enumeratePeopleWithBlock:(id /* block */)arg1;
- (id)initWithAccessAssertion:(id)arg1 database:(id)arg2;

@end
