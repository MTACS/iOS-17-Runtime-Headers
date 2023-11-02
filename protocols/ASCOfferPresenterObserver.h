
@protocol ASCOfferPresenterObserver <NSObject>

@required

- (void)offerPresenterDidObserveChangeToState:(NSString *)arg1;
- (void)offerPresenterPreprocessOffer:(void *)arg1 inState:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 8: <ASCOffer> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)offerPresenterWillPerformActionOfOffer:(id <ASCOffer>)arg1 inState:(NSString *)arg2 withActivity:(inout id*)arg3 inContext:(inout id*)arg4;

@end
