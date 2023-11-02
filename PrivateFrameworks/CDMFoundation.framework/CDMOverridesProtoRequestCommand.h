
@interface CDMOverridesProtoRequestCommand : CDMBaseCommand {
    SIRINLUINTERNALOVERRIDESOverridesRequest * _request;
}

@property (nonatomic, readonly) SIRINLUINTERNALOVERRIDESOverridesRequest *request;

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1;
- (id)request;

@end
