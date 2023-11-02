
@interface CDMSsuInferenceGraphRequestCommand : CDMServiceGraphProtoBackedCommand {
    SIRINLUEXTERNALSSU_INFERENCESsuInferenceRequest * _ssuRequest;
}

@property (nonatomic, readonly) SIRINLUEXTERNALSSU_INFERENCESsuInferenceRequest *ssuRequest;

+ (id)innerProtoPropertyName;
+ (Class)innerProtoType;
+ (id)serviceGraphName;

- (void).cxx_destruct;
- (id)initWithSsuRequest:(id)arg1;
- (id)ssuRequest;

@end
