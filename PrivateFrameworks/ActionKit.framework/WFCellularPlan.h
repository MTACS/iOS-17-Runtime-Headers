
@interface WFCellularPlan : NSObject {
    CoreTelephonyClient * _client;
    CTXPCServiceSubscriptionContext * _ctContext;
    NSString * _iccid;
    NSString * _label;
    NSString * _phoneNumber;
    CTCellularPlanItem * _planItem;
    NSUUID * _subscriptionContextUUID;
}

@property (nonatomic, readonly) NSArray *availableRATModes;
@property (nonatomic, readonly) NSString *carrierName;
@property (nonatomic, readonly) CoreTelephonyClient *client;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *ctContext;
@property (nonatomic) long long currentRATMode;
@property (nonatomic, readonly) NSString *currentRATModeLabel;
@property (nonatomic) bool dataRoamingEnabled;
@property (nonatomic, readonly) NSString *iccid;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isDataOnlyLine;
@property (nonatomic, readonly) bool isDefaultDataLine;
@property (nonatomic, readonly) bool isDefaultVoiceLine;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) CTCellularPlanItem *planItem;
@property (nonatomic) bool smartDataModeEnabled;
@property (nonatomic, readonly) NSUUID *subscriptionContextUUID;

- (void).cxx_destruct;
- (id)availableRATModes;
- (id)carrierName;
- (id)client;
- (id)ctContext;
- (long long)currentRATMode;
- (id)currentRATModeLabel;
- (bool)dataRoamingEnabled;
- (id)iccid;
- (id)initWithCTXPCServiceSubscriptionContext:(id)arg1 client:(id)arg2 planItem:(id)arg3;
- (bool)isActive;
- (bool)isDataOnlyLine;
- (bool)isDefaultDataLine;
- (bool)isDefaultVoiceLine;
- (id)label;
- (id)labelForRATMode:(long long)arg1;
- (id)phoneNumber;
- (id)planItem;
- (id)serviceDescriptor;
- (void)setCurrentRATMode:(long long)arg1;
- (void)setDataRoamingEnabled:(bool)arg1;
- (void)setSmartDataModeEnabled:(bool)arg1;
- (bool)smartDataModeEnabled;
- (id)subscriptionContextUUID;

@end
