
@interface CDMEmbeddingGraphResponseCommand : CDMServiceGraphCommand {
    CDMEmbeddingProtoResponseCommand * _embeddingProtoResponseCommand;
}

@property (nonatomic, readonly) CDMEmbeddingProtoResponseCommand *embeddingProtoResponseCommand;

+ (id)serviceGraphName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)convertResponseToSubwordResponse;
- (id)embeddingProtoResponseCommand;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmbeddingProtoResponseCommand:(id)arg1;

@end
