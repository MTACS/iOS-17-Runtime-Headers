
@interface CDMAssistantNLUResponse : CDMServiceGraphCommand {
    SIRINLUINTERNALPreprocessingWrapper * _preprocessingWrapper;
    NSString * _requestId;
    SIRINLUEXTERNALCDMNluResponse * _siriNLUTypeObj;
}

@property (nonatomic, readonly) SIRINLUINTERNALPreprocessingWrapper *preprocessingWrapper;
@property (nonatomic, readonly) NSString *requestId;
@property (nonatomic, readonly) SIRINLUEXTERNALCDMNluResponse *siriNLUTypeObj;

+ (id)serviceGraphName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNLUResponse:(id)arg1 preprocessingWrapper:(id)arg2 requestId:(id)arg3;
- (id)initWithNLUResponse:(id)arg1 requestId:(id)arg2;
- (id)preprocessingWrapper;
- (id)requestId;
- (id)siriNLUTypeObj;

@end
