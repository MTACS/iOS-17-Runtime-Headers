
@interface CDMQRRequestCommand : CDMBaseCommand {
    SIRINLUINTERNALQUERYREWRITEQRRequest * _qrRequest;
}

@property (nonatomic, retain) SIRINLUINTERNALQUERYREWRITEQRRequest *qrRequest;

- (void).cxx_destruct;
- (id)initWithQRRequest:(id)arg1;
- (id)qrRequest;
- (void)setQrRequest:(id)arg1;

@end
