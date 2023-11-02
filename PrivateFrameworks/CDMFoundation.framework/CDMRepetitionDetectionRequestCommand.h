
@interface CDMRepetitionDetectionRequestCommand : CDMBaseCommand {
    SIRINLUINTERNALQUERYREWRITEQRRequest * _qrRequest;
}

@property (nonatomic, readonly) SIRINLUINTERNALQUERYREWRITEQRRequest *qrRequest;

- (void).cxx_destruct;
- (id)initWithQRRequest:(id)arg1;
- (id)qrRequest;

@end
