
@protocol DIXPCServerInterface

@required

- (void)cancelSessionWithContext:(void *)arg1 session:(void *)arg2 error:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: DIClientContext *, DIDropInSession *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)checkInWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)endSessionWithContext:(void *)arg1 session:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: DIClientContext *, DIDropInSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getCurrentSessionWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DIDropInSession *, void*
- (void)getDownlinkMutedWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)getUplinkMutedForCurrentSessionWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)getUplinkMutedWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)loadDevicesWithContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DIClientContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)registerAudioPowerWithContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: DIClientContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)requestStateForDevice:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: DIDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setDownlinkMuted:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setUplinkMuted:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setUplinkMutedForCurrentSession:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startSessionWithContext:(void *)arg1 request:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: DIClientContext *, DIDropInRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DIDropInSession *, NSError *, void*
- (void)updateState:(void *)arg1 reason:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
