
@protocol _SGDSuggestManagerContactsConfirmRejectProtocol

@required

- (void)confirmContact:(void *)arg1 confirmRejectUI:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SGRealtimeContact *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)confirmContactDetailRecord:(void *)arg1 confirmRejectUI:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SGRecordId *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)confirmRecord:(void *)arg1 confirmRejectUI:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SGRecordId *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)rejectContact:(void *)arg1 confirmRejectUI:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SGRealtimeContact *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)rejectContactDetailRecord:(void *)arg1 confirmRejectUI:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SGRecordId *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)rejectRecord:(void *)arg1 confirmRejectUI:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SGRecordId *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*

@end
