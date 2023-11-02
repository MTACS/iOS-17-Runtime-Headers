
@interface ACMHTTPTransport : ACFHTTPTransport {
    unsigned long long  _identifier;
}

@property (nonatomic) unsigned long long identifier;

- (void)didEnd;
- (void)didStart;
- (unsigned long long)identifier;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)updateBackgroundTask;

@end
