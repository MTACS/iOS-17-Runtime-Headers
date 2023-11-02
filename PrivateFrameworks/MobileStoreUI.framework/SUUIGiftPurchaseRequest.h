
@interface SUUIGiftPurchaseRequest : NSObject {
    SUUIURLConnectionRequest * _request;
}

- (void).cxx_destruct;
- (id)_requestWithURL:(id)arg1 bodyDictionary:(id)arg2;
- (id)initWithDonation:(id)arg1 configuration:(id)arg2;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (void)purchaseWithCompletionBlock:(id /* block */)arg1;

@end
