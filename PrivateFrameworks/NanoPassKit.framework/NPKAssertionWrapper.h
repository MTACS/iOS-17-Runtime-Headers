
@interface NPKAssertionWrapper : NSObject {
    <NSObject> * _assertion;
    id /* block */  _assertionInvalidator;
    NSUUID * _wrapperUUID;
}

@property (nonatomic, readonly) <NSObject> *assertion;
@property (readonly) NSUUID *wrapperUUID;

- (void).cxx_destruct;
- (id)assertion;
- (void)dealloc;
- (id)description;
- (id)initWithAssertion:(id)arg1 invalidator:(id /* block */)arg2;
- (bool)invalidateAssertionExpected:(bool)arg1;
- (id)wrapperUUID;

@end
