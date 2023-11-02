
@protocol BMDSLScheduler <BPSCancellable>

@required

- (void)subscribeWithDSLGraph:(BMDSL *)arg1 forSubscriber:(id <BPSSubscriber>)arg2;
- (void)subscribeWithDSLGraph:(void *)arg1 publisherBlock:(void *)arg2; // needs 2 arg types, found 7: BMDSL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BPSPublisher *, void*

@end
