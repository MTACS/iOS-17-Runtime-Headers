
@protocol MRNowPlayingControllerImpl <NSObject>

@required

- (void)beginLoadingUpdates;
- (MRNowPlayingControllerConfiguration *)configuration;
- (MRNowPlayingControllerDestination *)destination;
- (void)destinationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MRPlayerPath *, NSError *, void*
- (MRNowPlayingControllerHelper *)helper;
- (id)initWithConfiguration:(MRNowPlayingControllerConfiguration *)arg1;
- (void)setHelper:(MRNowPlayingControllerHelper *)arg1;

@end
