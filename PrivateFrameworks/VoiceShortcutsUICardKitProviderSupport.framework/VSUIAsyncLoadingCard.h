
@interface VSUIAsyncLoadingCard : CRBasicCard {
    <CRCard> * _storedCard;
}

- (void).cxx_destruct;
- (bool)asynchronous;
- (id)initWithCard:(id)arg1;
- (void)loadCardWithCompletion:(id /* block */)arg1;

@end
