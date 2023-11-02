
@protocol HVQueueObserver <NSObject>

@required

- (void)contentAvailableFromSources:(unsigned int)arg1;
- (bool)deleteContentWithRequest:(HVSpotlightDeletionRequest *)arg1 error:(id*)arg2;

@end
