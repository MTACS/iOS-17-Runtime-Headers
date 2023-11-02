
@protocol SGSuggestionsServiceRemindersProtocol <_SGSuggestionsServiceBaseProtocol, _SGSuggestionsServiceFoundInAppsProtocol>

@required

- (void)allRemindersLimitedTo:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)confirmRealtimeReminder:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGReminder *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)confirmReminderByRecordId:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)logUserCreatedReminderTitle:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)rejectRealtimeReminder:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGReminder *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)rejectReminderByRecordId:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)reminderAlarmTriggeredForRecordId:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)reminderTitleForContent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*

@end
