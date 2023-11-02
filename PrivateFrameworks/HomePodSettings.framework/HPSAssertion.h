
@interface HPSAssertion : NSObject {
    void assertionContext;
    void assertionInvalidationHandler;
    void connection;
    void connectionProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 assertionType:(unsigned long long)arg2 connectionProvider:(id)arg3;
- (void)invalidate;
- (void)invalidateWithCompletion:(id /* block */)arg1;

@end
