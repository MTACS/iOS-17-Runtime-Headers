
@protocol DismissAlarmHalIntentHandling <NSObject>

@required

- (void)handleDismissAlarmHal:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DismissAlarmHalIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DismissAlarmHalIntentResponse *, void*
- (void)handleDismissAlarmHal:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DismissAlarmHalIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DismissAlarmHalIntentResponse *, void*

@optional

- (void)confirmDismissAlarmHal:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DismissAlarmHalIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DismissAlarmHalIntentResponse *, void*
- (void)confirmDismissAlarmHal:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DismissAlarmHalIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DismissAlarmHalIntentResponse *, void*

@end
