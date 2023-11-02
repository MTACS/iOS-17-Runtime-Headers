
@interface GDDonationView : NSObject <GDDonationView> {
    <GDViewAccessAssertion> * _accessAssertion;
    _PASSqliteDatabase * _db;
}

- (void).cxx_destruct;
- (void)enumerateTriples:(id /* block */)arg1;
- (id)initWithAccessAssertion:(id)arg1 database:(id)arg2;

@end
