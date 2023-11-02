
@interface CDMSpanMatchProtoRequestCommand : CDMBaseCommand {
    NSArray * _asrHypothesis;
    NLXSchemaNLXClientEventMetadata * _selfMetadata;
    NSArray * _spanMatchRequests;
}

@property (nonatomic, retain) NSArray *asrHypothesis;
@property (nonatomic, retain) NLXSchemaNLXClientEventMetadata *selfMetadata;
@property (nonatomic, retain) NSArray *spanMatchRequests;

- (void).cxx_destruct;
- (id)asrHypothesis;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequests:(id)arg1;
- (id)initWithRequests:(id)arg1 asrHypothesis:(id)arg2;
- (id)initWithRequests:(id)arg1 asrHypothesis:(id)arg2 selfMetadata:(id)arg3;
- (id)initWithRequests:(id)arg1 selfMetadata:(id)arg2;
- (id)selfMetadata;
- (void)setAsrHypothesis:(id)arg1;
- (void)setSelfMetadata:(id)arg1;
- (void)setSpanMatchRequests:(id)arg1;
- (id)spanMatchRequests;

@end
