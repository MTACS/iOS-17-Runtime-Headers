
@protocol DMTRemoteSetupBroadcasting <NSObject>

@required

- (NSString *)displayedPin;
- (void)invalidate;
- (bool)isBroadcasting;
- (bool)isInvalidated;
- (id /* block */)pairedTransportHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, CATTransport *, void*, id, SEL
- (void)setPairedTransportHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CATTransport *, void*
- (void)setShowErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setShowPinHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (id /* block */)showErrorHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSError *, void*, id, SEL
- (id /* block */)showPinHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSString *, void*, id, SEL
- (void)startBroadcasting;

@end
