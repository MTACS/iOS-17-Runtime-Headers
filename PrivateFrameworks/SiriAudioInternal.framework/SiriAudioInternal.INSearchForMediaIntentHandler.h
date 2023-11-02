
@interface SiriAudioInternal.INSearchForMediaIntentHandler : NSObject <INSearchForMediaIntentHandling>

- (void)handleSearchForMedia:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveMediaItemsForSearchForMedia:(id)arg1 withCompletion:(id /* block */)arg2;

@end
