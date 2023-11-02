
@protocol CoreTelephonyClientPNRDelegate <NSObject>

@optional

- (void)context:(CTXPCServiceSubscriptionContext *)arg1 pnrSupportChanged:(bool)arg2;
- (void)pnrReadyStateNotification:(CTXPCServiceSubscriptionContext *)arg1 regState:(bool)arg2;
- (void)pnrRequestSent:(CTXPCServiceSubscriptionContext *)arg1 pnrReqData:(CTPNRRequestSentInfo *)arg2;
- (void)pnrResponseReceived:(CTXPCServiceSubscriptionContext *)arg1 pnrRspData:(NSDictionary *)arg2;

@end
