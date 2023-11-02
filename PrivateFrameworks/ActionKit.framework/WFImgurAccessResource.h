
@interface WFImgurAccessResource : WFAccountAccessResource <WFActionEventObserver> {
    WFImgurUploadAction * _action;
    bool  _usesAccount;
}

@property (nonatomic, readonly, copy) NSArray *accounts;
@property (nonatomic) WFImgurUploadAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool usesAccount;

- (void).cxx_destruct;
- (Class)accountClass;
- (id)action;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)setAction:(id)arg1;
- (void)setUsesAccount:(bool)arg1;
- (unsigned long long)status;
- (bool)usesAccount;

@end
