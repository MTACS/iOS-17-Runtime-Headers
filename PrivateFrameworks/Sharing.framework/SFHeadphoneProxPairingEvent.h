
@interface SFHeadphoneProxPairingEvent : NSObject <SFCoreAnalyticsEvent> {
    double  _assetFetchDuration;
    bool  _attemptedPairing;
    unsigned char  _color;
    long long  _errorCode;
    double  _foundToFirstCardDuration;
    double  _pairingDuration;
    long long  _pairingType;
    unsigned int  _productID;
    double  _triggerToFirstCardDuration;
}

@property (nonatomic) double assetFetchDuration;
@property (nonatomic) bool attemptedPairing;
@property (nonatomic) unsigned char color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long errorCode;
@property (nonatomic, readonly, copy) NSDictionary *eventPayload;
@property (nonatomic) double foundToFirstCardDuration;
@property (readonly) unsigned long long hash;
@property (nonatomic) double pairingDuration;
@property (nonatomic) long long pairingType;
@property (nonatomic) unsigned int productID;
@property (readonly) Class superclass;
@property (nonatomic) double triggerToFirstCardDuration;

+ (id)eventName;

- (double)assetFetchDuration;
- (bool)attemptedPairing;
- (unsigned char)color;
- (long long)errorCode;
- (id)eventPayload;
- (double)foundToFirstCardDuration;
- (double)pairingDuration;
- (long long)pairingType;
- (unsigned int)productID;
- (void)setAssetFetchDuration:(double)arg1;
- (void)setAttemptedPairing:(bool)arg1;
- (void)setColor:(unsigned char)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setFoundToFirstCardDuration:(double)arg1;
- (void)setPairingDuration:(double)arg1;
- (void)setPairingType:(long long)arg1;
- (void)setProductID:(unsigned int)arg1;
- (void)setTriggerToFirstCardDuration:(double)arg1;
- (void)submitEvent;
- (double)triggerToFirstCardDuration;

@end
