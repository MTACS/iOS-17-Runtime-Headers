
@interface BlastDoorAPSUserPayloadHttpHeaders : NSObject {
    void aPSUserPayloadHttpHeaders;
}

@property (nonatomic, readonly) NSString *adhocServiceOverride;
@property (nonatomic, readonly) NSString *asHttpHeader;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *responseIdentifierString;
@property (nonatomic, readonly) NSString *splunkHint;
@property (nonatomic, readonly) NSString *strictTransportSecurity;
@property (nonatomic, readonly) NSString *traceId;

- (void).cxx_destruct;
- (id)adhocServiceOverride;
- (id)asHttpHeader;
- (id)description;
- (id)init;
- (id)responseIdentifierString;
- (id)splunkHint;
- (id)strictTransportSecurity;
- (id)traceId;

@end
