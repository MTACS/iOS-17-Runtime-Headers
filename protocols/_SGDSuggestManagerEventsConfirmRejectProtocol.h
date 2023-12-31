
@protocol _SGDSuggestManagerEventsConfirmRejectProtocol

@required

- (void)confirmEvent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SGRealtimeEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)confirmEventByRecordId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)deleteEventByRecordId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)rejectEvent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SGRealtimeEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)rejectEventByRecordId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)waitForEventWithIdentifier:(void *)arg1 toAppearInEventStoreWithLastModificationDate:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*

@end
