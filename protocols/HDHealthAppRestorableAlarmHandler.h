
@protocol HDHealthAppRestorableAlarmHandler <NSObject>

@required

- (NSString *)eventIdentifier;
- (void)handleAlarmEvent:(void *)arg1 restorableAlarmManager:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HDAlarmEvent *, HDHealthAppRestorableAlarmManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
