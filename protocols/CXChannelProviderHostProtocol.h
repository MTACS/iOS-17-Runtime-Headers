
@protocol CXChannelProviderHostProtocol <CXAbstractProviderHostProtocol>

@required

- (oneway void)registerWithConfiguration:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: CXChannelProviderConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)reportAudioFinishedForChannelWithUUID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)reportChannelWithUUID:(void *)arg1 connectedAtDate:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)reportChannelWithUUID:(void *)arg1 disconnectedAtDate:(void *)arg2 disconnectedReason:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSUUID *, NSDate *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)reportChannelWithUUID:(void *)arg1 updated:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, CXChannelUpdate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)reportIncomingTransmissionEndedForChannelWithUUID:(void *)arg1 reason:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)reportIncomingTransmissionStartedForChannelWithUUID:(void *)arg1 update:(void *)arg2 shouldReplaceOutgoingTransmission:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSUUID *, CXChannelUpdate *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
