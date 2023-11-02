
@interface CDMFoundation.CDMProtobufConverter : NSObject

+ (id)nluRequestJsonToSIRINLUWithProtoJson:(id)arg1;
+ (id)nluResponseFromSIRINLUEXTERNALCDMNluResponseWithResponse:(id)arg1 formatType:(id)arg2;
+ (id)nluResponseFromSIRINLUWithResponse:(id)arg1 formatType:(id)arg2;
+ (id)serializeExternalNluRequestWithRequest:(id)arg1 formatType:(id)arg2;
+ (id)serializeExternalNluResponseWithResponse:(id)arg1 formatType:(id)arg2;
+ (id)serializeExternalSubwordEmbeddingResponseWithResponse:(id)arg1 formatType:(id)arg2;
+ (id)serializeITFMParserRequestWithRequest:(id)arg1 formatType:(id)arg2;
+ (id)serializeITFMParserResponseWithResponse:(id)arg1 formatType:(id)arg2;
+ (id)serializeMDRequestWithRequest:(id)arg1 formatType:(id)arg2;
+ (id)serializeMDResponseWithResponse:(id)arg1 formatType:(id)arg2;
+ (id)serializeMRRequestWithRequest:(id)arg1 formatType:(id)arg2;
+ (id)serializeMRResponseWithResponse:(id)arg1 formatType:(id)arg2;
+ (id)serializeNlv4ParserRequestWithRequest:(id)arg1 formatType:(id)arg2;
+ (id)serializeNlv4ParserResponseWithResponse:(id)arg1 formatType:(id)arg2;
+ (id)serializePSCParserRequestWithRequest:(id)arg1 formatType:(id)arg2;
+ (id)serializePSCParserResponseWithResponse:(id)arg1 formatType:(id)arg2;
+ (id)serializePreprocessingWrapperWithWrapper:(id)arg1 formatType:(id)arg2;
+ (id)serializeSNLCParserRequestWithRequest:(id)arg1 formatType:(id)arg2;
+ (id)serializeSNLCParserResponseWithResponse:(id)arg1 formatType:(id)arg2;
+ (id)serializeSSURequestWithRequest:(id)arg1 formatType:(id)arg2;
+ (id)serializeSSUResponseWithResponse:(id)arg1 formatType:(id)arg2;
+ (id)serializeSpanMatchResponseWithResponse:(id)arg1 formatType:(id)arg2;
+ (id)serializeTokenizerResponseWithResponse:(id)arg1 formatType:(id)arg2;
+ (id)serializeUaaPParserRequestWithRequest:(id)arg1 formatType:(id)arg2;
+ (id)serializeUaaPParserResponseWithResponse:(id)arg1 formatType:(id)arg2;
+ (id)siriExternalNluRequestJsonToObjWithProto2Json:(id)arg1;
+ (id)siriExternalSubwordEmbeddingRequestJsonToObjWithProto2Json:(id)arg1;
+ (id)siriInternalMatchingSpanJsonToObjWithProto2Json:(id)arg1;

- (void).cxx_destruct;
- (id)init;

@end
