
@interface TSRemotePlanWebsheetContext : NSObject {
    NSString * _carrierName;
    int  _flowType;
    NSString * _iccid;
    NSDictionary * _postdata;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
    NSString * _url;
    bool  _useLiveID;
}

@property (retain) NSString *carrierName;
@property int flowType;
@property (retain) NSString *iccid;
@property (retain) NSDictionary *postdata;
@property (nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (retain) NSString *url;
@property bool useLiveID;

- (void).cxx_destruct;
- (id)carrierName;
- (int)flowType;
- (id)iccid;
- (id)init;
- (id)postdata;
- (void)setCarrierName:(id)arg1;
- (void)setFlowType:(int)arg1;
- (void)setIccid:(id)arg1;
- (void)setPostdata:(id)arg1;
- (void)setSubscriptionContext:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setUseLiveID:(bool)arg1;
- (id)subscriptionContext;
- (id)url;
- (bool)useLiveID;

@end
