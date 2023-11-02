
@interface LNInProcessConnection : LNConnection {
    <LNConnectionHostInterface> * _connectionInterface;
}

- (void).cxx_destruct;
- (void)connectWithOptions:(id)arg1;
- (id)connectionInterface;
- (id)initWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 error:(id*)arg3;
- (bool)refreshWithOptions:(id)arg1;

@end
