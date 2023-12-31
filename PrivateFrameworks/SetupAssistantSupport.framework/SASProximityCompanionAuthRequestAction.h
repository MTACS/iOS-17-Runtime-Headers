
@interface SASProximityCompanionAuthRequestAction : SASProximityAction {
    ACAccount * _account;
    AKDevice * _companionDevice;
}

@property (retain) ACAccount *account;
@property (retain) AKDevice *companionDevice;

+ (unsigned long long)actionID;

- (void).cxx_destruct;
- (id)account;
- (id)companionDevice;
- (bool)hasResponse;
- (id)idmsAccountForiCloud;
- (id)responsePayload;
- (void)setAccount:(id)arg1;
- (void)setCompanionDevice:(id)arg1;
- (void)setResponseFromData:(id)arg1;

@end
