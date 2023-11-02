
@interface AMSSignInContext : NSObject <AMSHashable> {
    bool  _canMakeAccountActive;
    NSString * _debugReason;
    bool  _ignoreAccountConversion;
    bool  _skipAuthentication;
}

@property (nonatomic) bool canMakeAccountActive;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *debugReason;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *hashedDescription;
@property (nonatomic) bool ignoreAccountConversion;
@property (nonatomic) bool skipAuthentication;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canMakeAccountActive;
- (id)debugReason;
- (id)hashedDescription;
- (bool)ignoreAccountConversion;
- (id)init;
- (void)setCanMakeAccountActive:(bool)arg1;
- (void)setDebugReason:(id)arg1;
- (void)setIgnoreAccountConversion:(bool)arg1;
- (void)setSkipAuthentication:(bool)arg1;
- (bool)skipAuthentication;

@end
