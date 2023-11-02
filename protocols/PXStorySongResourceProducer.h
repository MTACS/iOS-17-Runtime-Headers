
@protocol PXStorySongResourceProducer

@required

- (unsigned long long)logContext;
- (NSProgress *)requestSongResourceWithOptions:(void *)arg1 resultHandler:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PXStoryProducerResult *, void*
- (void)setLogContext:(unsigned long long)arg1;

@end
