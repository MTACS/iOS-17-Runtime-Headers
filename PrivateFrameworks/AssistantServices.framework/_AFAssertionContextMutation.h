
@interface _AFAssertionContextMutation : NSObject <AFAssertionContextMutating> {
    AFAssertionContext * _base;
    NSDate * _effectiveDate;
    double  _expirationDuration;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasTimestamp : 1; 
        unsigned int hasReason : 1; 
        unsigned int hasEffectiveDate : 1; 
        unsigned int hasExpirationDuration : 1; 
        unsigned int hasUserInfo : 1; 
    }  _mutationFlags;
    NSString * _reason;
    unsigned long long  _timestamp;
    NSDictionary * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getEffectiveDate;
- (double)getExpirationDuration;
- (id)getReason;
- (unsigned long long)getTimestamp;
- (id)getUserInfo;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setEffectiveDate:(id)arg1;
- (void)setExpirationDuration:(double)arg1;
- (void)setReason:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;

@end
