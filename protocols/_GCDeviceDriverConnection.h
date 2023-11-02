
@protocol _GCDeviceDriverConnection <NSObject>

@required

- (id)addInterruptionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (id)addInvalidationHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (GCFuture *)connectToDeviceService:(Protocol *)arg1 withClient:(id)arg2;
- (void)connectToDeviceService:(void *)arg1 withClient:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: Protocol *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)invalidate;
- (bool)isInvalid;
- (void)resume;
- (void)scheduleSendBarrierBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)suspend;

@end
