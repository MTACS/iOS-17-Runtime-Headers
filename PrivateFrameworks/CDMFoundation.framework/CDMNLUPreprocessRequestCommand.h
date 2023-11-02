
@interface CDMNLUPreprocessRequestCommand : CDMServiceGraphProtoBackedCommand {
    SIRINLUEXTERNALCDMNluRequest * _siriNLUTypeObj;
}

@property (nonatomic, readonly) SIRINLUEXTERNALCDMNluRequest *siriNLUTypeObj;

+ (id)innerProtoPropertyName;
+ (Class)innerProtoType;
+ (id)serviceGraphName;

- (void).cxx_destruct;
- (id)initWithNLURequest:(id)arg1;
- (id)siriNLUTypeObj;

@end
