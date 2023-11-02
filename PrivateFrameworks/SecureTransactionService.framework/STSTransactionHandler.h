
@interface STSTransactionHandler : STSHandler {
    STSSession * _parent;
}

@property (nonatomic, readonly) STSSession *parent;

- (void).cxx_destruct;
- (id)initWithParent:(id)arg1;
- (id)parent;
- (id)startTransactionWithAuthorization:(id)arg1 options:(unsigned long long)arg2;
- (id)stopTransaction;

@end
