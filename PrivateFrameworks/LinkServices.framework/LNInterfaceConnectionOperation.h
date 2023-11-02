
@interface LNInterfaceConnectionOperation : LNConnectionOperation {
    <LNConnectionHostInterface> * _connectionInterface;
}

@property (nonatomic, readonly) <LNConnectionHostInterface> *connectionInterface;

- (void).cxx_destruct;
- (id)connectionInterface;
- (id)initWithIdentifier:(id)arg1 connectionInterface:(id)arg2 priority:(long long)arg3 queue:(id)arg4 activity:(id /* block */)arg5;

@end
