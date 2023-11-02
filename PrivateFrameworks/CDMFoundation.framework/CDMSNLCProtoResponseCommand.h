
@interface CDMSNLCProtoResponseCommand : CDMBaseCommand {
    int  _classLabel;
    NSArray * _snlcParses;
    SIRINLUINTERNALITFMITFMParserResponse * _snlcResponse;
}

@property int classLabel;
@property (nonatomic, readonly) bool isDelegated;
@property (nonatomic, readonly) NSArray *snlcParses;
@property (nonatomic, readonly) SIRINLUINTERNALITFMITFMParserResponse *snlcResponse;

- (void).cxx_destruct;
- (int)classLabel;
- (id)initWithClassLabel:(int)arg1 snlcParses:(id)arg2 snlcResponse:(id)arg3;
- (bool)isDelegated;
- (void)setClassLabel:(int)arg1;
- (id)snlcParses;
- (id)snlcResponse;

@end
