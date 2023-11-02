
@protocol SBSLockScreenServiceServerInterface

@required

- (oneway void)launchEmergencyDialerWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)lockDeviceAnimated:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)requestPasscodeCheckUIWithOptions:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SBSUnlockOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)requestPasscodeUnlockUIWithOptions:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SBSUnlockOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)setPreventPasscodeLock:(NSNumber *)arg1;
- (oneway void)setPreventSpuriousScreenUndim:(NSNumber *)arg1;

@end
