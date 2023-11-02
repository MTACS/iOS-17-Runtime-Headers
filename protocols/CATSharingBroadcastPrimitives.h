
@protocol CATSharingBroadcastPrimitives <CATSharingPrimitives>

@required

- (id /* block */)dismissPinHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (id /* block */)messageReceivedHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSDictionary *, void*, id, SEL
- (CATSharingDevice *)remoteDevice;
- (void)sendMessageToPairedDevice:(NSDictionary *)arg1;
- (id /* block */)sessionPairedHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)setDismissPinHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setMessageReceivedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)setSessionPairedHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setShowPinHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (id /* block */)showPinHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSString *, void*, id, SEL

@end
