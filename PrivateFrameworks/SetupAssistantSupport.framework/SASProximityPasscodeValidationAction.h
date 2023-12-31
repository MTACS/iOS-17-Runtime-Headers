
@interface SASProximityPasscodeValidationAction : SASProximityAction {
    NSString * _passcode;
    bool  _passcodeValid;
}

@property (retain) NSString *passcode;
@property bool passcodeValid;

+ (id)actionFromDictionary:(id)arg1;
+ (unsigned long long)actionID;

- (void).cxx_destruct;
- (bool)hasResponse;
- (id)passcode;
- (bool)passcodeValid;
- (id)requestPayload;
- (id)responsePayload;
- (void)setPasscode:(id)arg1;
- (void)setPasscodeValid:(bool)arg1;
- (void)setResponseFromData:(id)arg1;

@end
