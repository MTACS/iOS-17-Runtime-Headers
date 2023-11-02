
@protocol DDUIEndpointPairingReceiverSession <DDUIEndpointPairingSession>

@required

- (void)activateWithErrorHandler:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, id /* block */, void*, void, id /* block */, unsigned long long, void*
- (void)pairWithMessage:(DDUIPairCompleteMessage *)arg1;

@end
