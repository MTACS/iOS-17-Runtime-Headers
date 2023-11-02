
@protocol DDUIEndpointPairingInitiatorSession <DDUIEndpointPairingSession>

@required

- (void)pairWithMessage:(void *)arg1 errorHandler:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 15: DDUIPairInitiateMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, id /* block */, void*, void, id /* block */, unsigned long long, NSUUID *, DDUIPairCompleteMessage *, void*

@end
