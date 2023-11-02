
@protocol RPStatusUpdatableSubscriber <NSObject>

@required

- (void)subscribeToStatusUpdate:(void *)arg1 leeway:(void *)arg2 configurationFlags:(void *)arg3 statusUpdateHandler:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 18: NSString *, double, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, RPCompanionLinkDevice *, int, NSDictionary *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)unsubscribeToStatusUpdate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
