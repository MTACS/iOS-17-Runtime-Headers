
@interface LAPSPasscodeChangeSystemStubbedAdapter : NSObject <LAPSPasscodeChangeSystem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)canChangePasscodeWithError:(id*)arg1;
- (void)changePasscode:(id)arg1 to:(id)arg2 completion:(id /* block */)arg3;
- (bool)hasPasscode;
- (id)lastPasscodeChange;
- (id)newPasscodeRequest;
- (id)oldPasscodeRequest;
- (void)verifyNewPasscode:(id)arg1 completion:(id /* block */)arg2;
- (void)verifyPasscode:(id)arg1 completion:(id /* block */)arg2;

@end
