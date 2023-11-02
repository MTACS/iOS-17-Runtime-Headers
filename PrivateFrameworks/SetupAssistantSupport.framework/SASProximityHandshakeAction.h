
@interface SASProximityHandshakeAction : SASProximityAction {
    SASProximityHandshake * _handshake;
}

@property (retain) SASProximityHandshake *handshake;

+ (unsigned long long)actionID;

- (void).cxx_destruct;
- (id)handshake;
- (bool)hasResponse;
- (id)init;
- (id)responsePayload;
- (void)setHandshake:(id)arg1;
- (void)setResponseFromData:(id)arg1;

@end
