
@protocol EncoreXPCService.DistributedEventHandler

@required

- (void)echoWithEvent:(EncoreEvent *)arg1;
- (void)handleEventWithEvent:(EncoreEvent *)arg1;
- (void)publishWithEvent:(EncoreEvent *)arg1;
- (void)subscribeWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, EncoreEvent *, void*

@end
