
@protocol BLSHOnSystemSleepActionDelegate <NSObject>

@required

- (void)systemSleepAction:(void *)arg1 performWithCompletion:(void *)arg2; // needs 2 arg types, found 6: BLSHOnSystemSleepAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)systemSleepAction:(BLSHOnSystemSleepAction *)arg1 systemWillWakeForReason:(NSString *)arg2;

@end
