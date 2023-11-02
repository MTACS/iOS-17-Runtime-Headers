
@interface CDMContextUpdateResponseCommand : CDMBaseCommand {
    SIRINLUEXTERNALCorrectionOutcome * _correctionOutcome;
    SIRINLUINTERNALCONTEXTUPDATEContextUpdateResponse * _ctxUpdateResponse;
    SIRINLUINTERNALCONTEXTUPDATEReformedTurnInputBundle * _firstReformedInput;
}

@property (nonatomic, retain) SIRINLUEXTERNALCorrectionOutcome *correctionOutcome;
@property (nonatomic, retain) SIRINLUINTERNALCONTEXTUPDATEContextUpdateResponse *ctxUpdateResponse;
@property (nonatomic, retain) SIRINLUINTERNALCONTEXTUPDATEReformedTurnInputBundle *firstReformedInput;

- (void).cxx_destruct;
- (id)correctionOutcome;
- (id)ctxUpdateResponse;
- (id)firstReformedInput;
- (id)initWithCtxUpdateResponse:(id)arg1;
- (void)setCorrectionOutcome:(id)arg1;
- (void)setCtxUpdateResponse:(id)arg1;
- (void)setFirstReformedInput:(id)arg1;

@end
