
@interface NPKPeerPaymentQuickTypeParser : NSObject {
    NSSet * _allowedPayloadIDs;
    NSSet * _supportedCurrencyCodes;
}

@property (nonatomic, readonly) NSSet *allowedPayloadIDs;
@property (nonatomic, readonly) NSSet *supportedCurrencyCodes;

- (void).cxx_destruct;
- (id)allowedPayloadIDs;
- (id)initWithSupportedCurrencyCodes:(id)arg1 allowedPayloadIDs:(id)arg2;
- (id)parsePayload:(id)arg1 payloadID:(id)arg2;
- (id)parsePayload:(id)arg1 payloadID:(id)arg2 maxCount:(unsigned long long)arg3;
- (id)supportedCurrencyCodes;

@end
