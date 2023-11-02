
@interface STPINController : NSObject {
    NSObject<OS_dispatch_source> * _backoffTimer;
    NSDate * _timeoutEndDate;
    STCoreUser * _user;
}

@property (retain) NSObject<OS_dispatch_source> *backoffTimer;
@property (readonly) bool canRecoveryAuthenticate;
@property (copy) NSDate *timeoutEndDate;
@property (nonatomic, readonly) STCoreUser *user;

+ (unsigned long long)pinLength;

- (void).cxx_destruct;
- (bool)_authenticateWithPIN:(id)arg1 forUser:(id)arg2 allowPasscodeRecovery:(bool)arg3 error:(id*)arg4;
- (void)_beginTimeoutUntilDate:(id)arg1;
- (bool)_isPINValid:(id)arg1;
- (bool)_saveChangesForUser:(id)arg1 error:(id*)arg2;
- (void)_setNewPIN:(id)arg1 currentPIN:(id)arg2 recoveryAppleIDPrompt:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (bool)_setPasscode:(id)arg1 recoveryAppleID:(id)arg2 forUser:(id)arg3 error:(id*)arg4;
- (id)_timeoutEndDateForAttemptNumber:(long long)arg1;
- (void)authenticateWithPIN:(id)arg1 allowPasscodeRecovery:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticateWithPIN:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)authenticateWithPIN:(id)arg1 error:(id*)arg2;
- (id)backoffTimer;
- (bool)canRecoveryAuthenticate;
- (id)initWithUser:(id)arg1;
- (void)removePIN:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setBackoffTimer:(id)arg1;
- (void)setPIN:(id)arg1 withRecoveryAppleIDPrompt:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)setTimeoutEndDate:(id)arg1;
- (id)timeoutEndDate;
- (void)updatePIN:(id)arg1 toPIN:(id)arg2 withRecoveryAppleIDPrompt:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)user;

@end
