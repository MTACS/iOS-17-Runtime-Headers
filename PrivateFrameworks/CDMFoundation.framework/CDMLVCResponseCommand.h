
@interface CDMLVCResponseCommand : CDMBaseCommand {
    int  _classLabel;
    SIRINLUINTERNALITFMITFMParserResponse * _itfmResponse;
    SIRINLUEXTERNALLanguageVariantResult * _languageVariantResult;
}

@property int classLabel;
@property (nonatomic, readonly) SIRINLUINTERNALITFMITFMParserResponse *itfmResponse;
@property (nonatomic, readonly) SIRINLUEXTERNALLanguageVariantResult *languageVariantResult;

- (void).cxx_destruct;
- (int)classLabel;
- (id)description;
- (id)initWithITFMResponse:(id)arg1 languageVariantResult:(id)arg2;
- (id)itfmResponse;
- (id)languageVariantResult;
- (void)setClassLabel:(int)arg1;

@end
