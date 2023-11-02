
@interface CDMNLUPreprocessResponseCommand : CDMServiceGraphProtoBackedCommand {
    SIRINLUINTERNALPreprocessingWrapper * _preprocessingWrapper;
}

@property (nonatomic, readonly) SIRINLUINTERNALPreprocessingWrapper *preprocessingWrapper;

+ (id)innerProtoPropertyName;
+ (Class)innerProtoType;
+ (id)serviceGraphName;

- (void).cxx_destruct;
- (id)initWithPreprocessingWrapper:(id)arg1;
- (id)preprocessingWrapper;

@end
