
@interface SKUIPersonalizeOfferOperation : NSOperation {
    SKUIClientContext * _clientContext;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    long long  _itemID;
    id /* block */  _outputBlock;
}

@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (id)initWithItemIdentifier:(long long)arg1 clientContext:(id)arg2;
- (void)main;
- (id /* block */)outputBlock;
- (void)setOutputBlock:(id /* block */)arg1;

@end
