
@interface AMSCarrierOfferRegistrationTask : AMSTask <AMSBagConsumer> {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    NSArray * _carriers;
    AMSURLRequestEncoder * _checkOfferRequestEncoder;
    AMSProcessInfo * _clientInfo;
    NSString * _deviceGUID;
    NSString * _msisdn;
    AMSPromise * _pacTokenPromise;
    AMSURLRequestEncoder * _registrationRequestEncoder;
    AMSURLSession * _urlSession;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, readonly) NSArray *carriers;
@property (nonatomic, readonly) AMSURLRequestEncoder *checkOfferRequestEncoder;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceGUID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *msisdn;
@property (nonatomic, readonly) AMSPromise *pacTokenPromise;
@property (nonatomic, readonly) AMSURLRequestEncoder *registrationRequestEncoder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AMSURLSession *urlSession;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (id)invalidParameterError:(id)arg1;
+ (id)pollingIntervalFromBag:(id)arg1;

- (void).cxx_destruct;
- (id)_checkOffersBody;
- (id)_checkOffersRequest;
- (id)_hasOffers;
- (id)_includesAllowedCarrier;
- (id)_pacToken;
- (id)_parseCheckOffersResult:(id)arg1;
- (id)_performRegistrationFlow;
- (id)_registerCarrierOffersToAccount;
- (id)_registrationBody;
- (id)_registrationRequest;
- (id)account;
- (id)bag;
- (id)carriers;
- (id)checkOfferRequestEncoder;
- (id)clientInfo;
- (id)deviceGUID;
- (id)initWithAccount:(id)arg1 bag:(id)arg2;
- (id)initWithAccount:(id)arg1 bag:(id)arg2 carriers:(id)arg3 checkOfferRequestEncoder:(id)arg4 deviceGUID:(id)arg5 msisdn:(id)arg6 pacTokenPromise:(id)arg7 registrationRequestEncoder:(id)arg8 urlSession:(id)arg9;
- (id)initWithAccount:(id)arg1 bag:(id)arg2 carriers:(id)arg3 deviceGUID:(id)arg4 msisdn:(id)arg5;
- (id)msisdn;
- (id)pacTokenPromise;
- (id)perform;
- (id)registrationRequestEncoder;
- (void)setClientInfo:(id)arg1;
- (id)urlSession;

@end
