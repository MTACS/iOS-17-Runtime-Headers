
@interface AMSDeviceOfferEligibilityTask : NSObject {
    <AMSBagProtocol> * _bag;
    NSString * _deviceGUID;
    NSString * _masterSerialNumber;
    AMSURLSession * _urlSession;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, readonly) NSString *deviceGUID;
@property (nonatomic, readonly) NSString *masterSerialNumber;
@property (nonatomic, retain) AMSURLSession *urlSession;

- (void).cxx_destruct;
- (id)_accountEligibilityEncoderWithBag:(id)arg1 account:(id)arg2 clientInfo:(id)arg3;
- (id)_accountEligibilityRequestParametersWithIdentifiers:(id)arg1;
- (id)_deviceEligibilityEncoderWithBag:(id)arg1 clientInfo:(id)arg2;
- (id)_deviceEligibilityRequestParametersWithGroups:(id)arg1;
- (id)_eligibilityRequest;
- (id)_offersDecodedFromResult:(id)arg1;
- (id)bag;
- (id)deviceGUID;
- (id)initWithBag:(id)arg1 deviceGUID:(id)arg2 masterSerialNumber:(id)arg3 urlSession:(id)arg4;
- (id)masterSerialNumber;
- (id)performAccountEligibility:(id)arg1 forOffers:(id)arg2 clientInfo:(id)arg3;
- (id)performAnonymousDeviceEligibility:(id)arg1 clientInfo:(id)arg2;
- (void)setBag:(id)arg1;
- (void)setUrlSession:(id)arg1;
- (id)urlSession;

@end
