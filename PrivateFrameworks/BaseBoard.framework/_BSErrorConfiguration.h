
@interface _BSErrorConfiguration : NSObject <BSErrorConfiguring> {
    long long  _code;
    NSString * _domain;
    NSMutableDictionary * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)setCodeDescription:(id)arg1;
- (void)setFailureDescription:(id)arg1;
- (void)setFailureReason:(id)arg1;
- (void)setUnderlyingError:(id)arg1;
- (void)setUnderlyingErrors:(id)arg1;
- (void)setUserInfoValue:(id)arg1 forKey:(id)arg2;

@end
