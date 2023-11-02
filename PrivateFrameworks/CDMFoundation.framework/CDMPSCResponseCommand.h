
@interface CDMPSCResponseCommand : CDMBaseCommand {
    NSArray * _pscParses;
    SIRINLUINTERNALITFMITFMParserResponse * _pscResponse;
}

@property (nonatomic, readonly) NSArray *pscParses;
@property (nonatomic, readonly) SIRINLUINTERNALITFMITFMParserResponse *pscResponse;

- (void).cxx_destruct;
- (id)initWithPscParses:(id)arg1 pscResponse:(id)arg2;
- (id)pscParses;
- (id)pscResponse;

@end
