
@interface CDMAssistantNLUCommand : CDMServiceGraphCommand {
    NSString * _clientId;
    NLXSchemaNLXClientEventMetadata * _selfMetadata;
    SIRINLUEXTERNALCDMNluRequest * _siriNLUTypeObj;
}

@property (nonatomic, readonly) NSString *clientId;
@property (nonatomic, retain) NLXSchemaNLXClientEventMetadata *selfMetadata;
@property (nonatomic, readonly) SIRINLUEXTERNALCDMNluRequest *siriNLUTypeObj;

+ (id)serviceGraphName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNLURequest:(id)arg1 clientId:(id)arg2;
- (id)initWithNLURequest:(id)arg1 clientId:(id)arg2 dataDispatcherContext:(id)arg3;
- (id)loggingRequestID;
- (id)selfMetadata;
- (void)setSelfMetadata:(id)arg1;
- (id)siriNLUTypeObj;

@end
