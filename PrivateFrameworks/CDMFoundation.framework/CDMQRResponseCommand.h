
@interface CDMQRResponseCommand : CDMBaseCommand {
    SIRINLUINTERNALQUERYREWRITEQRResponse * _qrResponse;
    SIRINLUEXTERNALRewriteMessage * _rewriteMsg;
}

@property (nonatomic, retain) SIRINLUINTERNALQUERYREWRITEQRResponse *qrResponse;
@property (nonatomic, retain) SIRINLUEXTERNALRewriteMessage *rewriteMsg;

+ (id)convertRewriteHypo2RewriteMsgForInfoDomains:(id)arg1;

- (void).cxx_destruct;
- (id)initWithResponse:(id)arg1;
- (id)qrResponse;
- (id)rewriteMsg;
- (void)setQrResponse:(id)arg1;
- (void)setRewriteMsg:(id)arg1;

@end
