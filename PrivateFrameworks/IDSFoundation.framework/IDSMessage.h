
@interface IDSMessage : IDSBaseMessage <NSCopying> {
    NSDictionary * _deliveryStatusContext;
    NSNumber * _version;
    bool  _wantsCertifiedDelivery;
    NSNumber * _wantsDeliveryStatus;
}

@property (copy) NSDictionary *deliveryStatusContext;
@property (copy) NSNumber *version;
@property bool wantsCertifiedDelivery;
@property (copy) NSNumber *wantsDeliveryStatus;

- (void).cxx_destruct;
- (id)_madridServerBag;
- (id)_objectForKeyFromMadridBag:(id)arg1;
- (bool)_shouldUseJSONForEncoding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deliveryStatusContext;
- (id)init;
- (id)messageBody;
- (void)setDeliveryStatusContext:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setWantsCertifiedDelivery:(bool)arg1;
- (void)setWantsDeliveryStatus:(id)arg1;
- (id)userAgentHeaderString;
- (id)version;
- (bool)wantsAPSRetries;
- (bool)wantsCertifiedDelivery;
- (id)wantsDeliveryStatus;
- (bool)wantsHTTPHeaders;
- (bool)wantsUserAgentInHeaders;

@end
