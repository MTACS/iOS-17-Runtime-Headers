
@interface SKProductsResponse : NSObject {
    id  _internal;
}

@property (nonatomic, readonly) NSArray *invalidProductIdentifiers;
@property (nonatomic, readonly) NSArray *products;

- (void).cxx_destruct;
- (void)_setInvalidIdentifiers:(id)arg1;
- (void)_setProducts:(id)arg1;
- (id)init;
- (id)invalidProductIdentifiers;
- (id)products;

@end
