
@protocol SnoozeAlarmHalIntentHandling <NSObject>

@required

- (void)handleSnoozeAlarmHal:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SnoozeAlarmHalIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SnoozeAlarmHalIntentResponse *, void*
- (void)handleSnoozeAlarmHal:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SnoozeAlarmHalIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SnoozeAlarmHalIntentResponse *, void*

@optional

- (void)confirmSnoozeAlarmHal:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SnoozeAlarmHalIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SnoozeAlarmHalIntentResponse *, void*
- (void)confirmSnoozeAlarmHal:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SnoozeAlarmHalIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SnoozeAlarmHalIntentResponse *, void*

@end
