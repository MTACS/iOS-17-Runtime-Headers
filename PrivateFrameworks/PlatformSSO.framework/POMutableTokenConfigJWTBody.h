
@interface POMutableTokenConfigJWTBody : POTokenConfigJWTBody <POMutableJWTBody>

@property (readonly) NSDictionary *allData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *loginUserName;
@property (readonly) Class superclass;
@property (retain) NSString *userName;

- (void)addCustomClaims:(id)arg1;
- (void)setLoginUserName:(id)arg1;
- (void)setUserName:(id)arg1;

@end
