
@interface CDMRepetitionDetectionResponseCommand : CDMBaseCommand {
    SIRINLUINTERNALQUERYREWRITEQRResponse * _response;
}

@property (nonatomic, readonly) SIRINLUINTERNALQUERYREWRITEQRResponse *response;

- (void).cxx_destruct;
- (id)initWithResponse:(id)arg1;
- (id)response;

@end
