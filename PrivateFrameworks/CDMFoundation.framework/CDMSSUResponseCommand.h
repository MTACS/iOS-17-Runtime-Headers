
@interface CDMSSUResponseCommand : CDMBaseCommand {
    SIRINLUINTERNALSSUSSUResponse * _ssuResponse;
}

@property (nonatomic, readonly) SIRINLUINTERNALSSUSSUResponse *ssuResponse;

- (void).cxx_destruct;
- (id)initWithCmdError:(id)arg1;
- (id)initWithSSUResponse:(id)arg1;
- (id)initWithSSUResponse:(id)arg1 cmdError:(id)arg2;
- (id)ssuResponse;

@end
