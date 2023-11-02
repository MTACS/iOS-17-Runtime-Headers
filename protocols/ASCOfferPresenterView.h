
@protocol ASCOfferPresenterView <NSObject>

@required

- (void)beginOfferModalStateWithCancelBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)endOfferModalState;
- (ASCOfferPresenterViewState *)saveOfferState;
- (void)setOfferEnabled:(bool)arg1;
- (void)setOfferInteractive:(bool)arg1;
- (void)setOfferMetadata:(ASCOfferMetadata *)arg1;
- (void)setOfferStatus:(NSString *)arg1;
- (void)setOfferTheme:(ASCOfferTheme *)arg1;

@end
