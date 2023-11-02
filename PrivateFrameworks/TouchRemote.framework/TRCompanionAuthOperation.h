
@interface TRCompanionAuthOperation : TROperation {
    ACAccount * _account;
    bool  _isCLIMode;
    NSString * _rawPassword;
    bool  _shouldUseAIDA;
    NSSet * _targetedServices;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic) bool isCLIMode;
@property (nonatomic, retain) NSString *rawPassword;
@property (nonatomic) bool shouldUseAIDA;
@property (nonatomic, retain) NSSet *targetedServices;

- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1;
- (id)account;
- (void)execute;
- (bool)isCLIMode;
- (id)rawPassword;
- (void)setAccount:(id)arg1;
- (void)setIsCLIMode:(bool)arg1;
- (void)setRawPassword:(id)arg1;
- (void)setShouldUseAIDA:(bool)arg1;
- (void)setTargetedServices:(id)arg1;
- (bool)shouldUseAIDA;
- (id)targetedServices;

@end
