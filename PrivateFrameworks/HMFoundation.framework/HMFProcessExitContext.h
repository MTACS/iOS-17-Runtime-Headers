
@interface HMFProcessExitContext : NSObject {
    long long  _OSReasonCode;
    long long  _OSReasonDomain;
    long long  _crashReasonCode;
    NSError * _errorRepresentation;
    bool  _isCrash;
    bool  _isJetsam;
    bool  _isStale;
    long long  _jetsamReasonCode;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) long long OSReasonCode;
@property (nonatomic, readonly) long long OSReasonDomain;
@property (nonatomic, readonly) long long crashReasonCode;
@property (nonatomic, readonly) NSError *errorRepresentation;
@property (nonatomic, readonly) bool isCrash;
@property (nonatomic, readonly) bool isJetsam;
@property (nonatomic, readonly) bool isStale;
@property (nonatomic, readonly) long long jetsamReasonCode;
@property (nonatomic, readonly) NSDate *timestamp;

+ (id)lastExitContext;
+ (bool)onceCompareAndSetTimestamp:(id)arg1 toStoredValueWithKey:(id)arg2 inStore:(id)arg3;

- (void).cxx_destruct;
- (long long)OSReasonCode;
- (long long)OSReasonDomain;
- (long long)crashReasonCode;
- (id)errorRepresentation;
- (id)initWithRBSProcessExitContext:(id)arg1 processName:(id)arg2 userDefaultsStore:(id)arg3 resetStoreReadToken:(bool)arg4;
- (id)initWithUserDefaultsStore:(id)arg1 processLastRecordedExitTimeKey:(id)arg2 resetStoreReadToken:(bool)arg3 timestamp:(id)arg4 osReasonDomain:(long long)arg5 osReasonCode:(long long)arg6 isCrash:(bool)arg7 isJetsam:(bool)arg8 errorRepresentation:(id)arg9;
- (bool)isCrash;
- (bool)isJetsam;
- (bool)isStale;
- (long long)jetsamReasonCode;
- (id)timestamp;

@end
