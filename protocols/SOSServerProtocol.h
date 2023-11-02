
@protocol SOSServerProtocol <NSObject>

@required

- (void)mostRecentLocationSentWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLLocation *, void*
- (void)startSendingLocationUpdateForReason:(void *)arg1 WithCompletion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, id*, void*
- (void)startSendingLocationUpdateWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, id*, void*
- (void)stopSendingLocationUpdate;
- (void)syncState:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, long long, long long, SOSButtonPressState *, void*
- (void)triggerSOSWithUUID:(void *)arg1 triggerMechanism:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)willStartSendingLocationUpdate;

@end
