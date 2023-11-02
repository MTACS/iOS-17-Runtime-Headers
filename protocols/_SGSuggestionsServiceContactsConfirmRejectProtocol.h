
@protocol _SGSuggestionsServiceContactsConfirmRejectProtocol

@required

- (void)confirmContact:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRealtimeContact *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)confirmContactDetailRecord:(SGRecordId *)arg1 confirmationUI:(int)arg2 error:(id*)arg3;
- (void)confirmContactDetailRecord:(void *)arg1 confirmationUI:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: SGRecordId *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)confirmContactDetailRecord:(SGRecordId *)arg1 error:(id*)arg2;
- (void)confirmContactDetailRecord:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)confirmRecord:(SGRecordId *)arg1 error:(id*)arg2;
- (void)confirmRecord:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)rejectContact:(void *)arg1 rejectionUI:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: SGRealtimeContact *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)rejectContact:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRealtimeContact *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)rejectContactDetailRecord:(SGRecordId *)arg1 error:(id*)arg2;
- (bool)rejectContactDetailRecord:(SGRecordId *)arg1 rejectionUI:(int)arg2 error:(id*)arg3;
- (void)rejectContactDetailRecord:(void *)arg1 rejectionUI:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: SGRecordId *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)rejectContactDetailRecord:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)rejectRecord:(SGRecordId *)arg1 error:(id*)arg2;
- (bool)rejectRecord:(SGRecordId *)arg1 rejectionUI:(int)arg2 error:(id*)arg3;
- (void)rejectRecord:(void *)arg1 rejectionUI:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: SGRecordId *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)rejectRecord:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
