
@interface GDPageRankView : NSObject <GDPageRankView> {
    <GDViewAccessAssertion> * _accessAssertion;
    _PASSqliteDatabase * _db;
}

- (void).cxx_destruct;
- (id)initWithAccessAssertion:(id)arg1 database:(id)arg2;
- (id)pageRanksWithError:(id*)arg1;

@end
