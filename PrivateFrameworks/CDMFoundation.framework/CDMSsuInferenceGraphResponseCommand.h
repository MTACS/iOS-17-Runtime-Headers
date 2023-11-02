
@interface CDMSsuInferenceGraphResponseCommand : CDMServiceGraphProtoBackedCommand {
    SIRINLUEXTERNALSSU_INFERENCESsuInferenceResponse * _ssuResponse;
}

@property (nonatomic, readonly) SIRINLUEXTERNALSSU_INFERENCESsuInferenceResponse *ssuResponse;

+ (id)innerProtoPropertyName;
+ (Class)innerProtoType;
+ (id)serviceGraphName;

- (void).cxx_destruct;
- (id)initWithSsuResponse:(id)arg1;
- (id)ssuResponse;

@end
