
@interface IDSCTPNR : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDelegate, CoreTelephonyClientPNRDelegate> {
    <IDSCTPNRDelegate> * _PNRDelegate;
    long long  _carrierShortcodeSupported;
    id  _context;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _contextLock;
    id  _coreTelephonyClient;
    NSString * _labelID;
}

@property (nonatomic) <IDSCTPNRDelegate> *PNRDelegate;
@property (nonatomic, readonly) IDSCTPNRInfo *PNRInfo;
@property (nonatomic) long long carrierShortcodeSupported;
@property (nonatomic, retain) CTXPCServiceSubscriptionContext *context;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } contextLock;
@property (nonatomic, retain) CoreTelephonyClient *coreTelephonyClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPNRSupported;
@property (nonatomic, readonly) bool isSIMReady;
@property (nonatomic, retain) NSString *labelID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) bool userOptInRequired;

- (void).cxx_destruct;
- (id)PNRDelegate;
- (id)PNRInfo;
- (id)_initWithCoreTelephonyClient:(id)arg1 SIM:(id)arg2;
- (void)_resetCarrierShortcodeSupportedCachedValue;
- (id)_telephonyRequestForPushToken:(id)arg1 phoneNumberValidationMechanism:(id)arg2 attemptCount:(unsigned int)arg3;
- (void)carrierBundleChange:(id)arg1;
- (long long)carrierShortcodeSupported;
- (id)context;
- (struct os_unfair_lock_s { unsigned int x1; })contextLock;
- (id)coreTelephonyClient;
- (id)description;
- (bool)isPNRSupported;
- (bool)isRelevantContext:(id)arg1;
- (bool)isSIMReady;
- (bool)issuePNRForMechanism:(id)arg1 pushToken:(id)arg2 attemptCount:(unsigned int)arg3 completion:(id /* block */)arg4;
- (id)labelID;
- (void)operatorBundleChange:(id)arg1;
- (void)pnrReadyStateNotification:(id)arg1 regState:(bool)arg2;
- (void)pnrRequestSent:(id)arg1 pnrReqData:(id)arg2;
- (void)pnrResponseReceived:(id)arg1 pnrRspData:(id)arg2;
- (void)setCarrierShortcodeSupported:(long long)arg1;
- (void)setContext:(id)arg1;
- (void)setContextLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setCoreTelephonyClient:(id)arg1;
- (void)setLabelID:(id)arg1;
- (void)setPNRDelegate:(id)arg1;
- (void)subscriptionInfoDidChange;
- (id)uniqueIdentifier;
- (bool)userOptInRequired;

@end
