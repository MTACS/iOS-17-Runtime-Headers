
@interface AMSStoreReviewGatingController : NSObject {
    void bag;
    void ledger;
}

@property (nonatomic, readonly) <AMSBagProtocol> *bag;

- (void).cxx_destruct;
- (id)bag;
- (void)canPromptWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)didEnterForegroundWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)didPromptWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)init;
- (id)initWithBag:(id)arg1;
- (void)isEnabledWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
