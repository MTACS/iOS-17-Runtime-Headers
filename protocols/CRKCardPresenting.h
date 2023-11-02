
@protocol CRKCardPresenting <NSObject>

@required

- (<CRCard> *)card;
- (CRKCardPresentationConfiguration *)configuration;
- (void)setConfiguration:(CRKCardPresentationConfiguration *)arg1;
- (void)setConfiguration:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CRKCardPresentationConfiguration *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
