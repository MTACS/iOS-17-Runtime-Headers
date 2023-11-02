
@interface LighthouseReferenceResolution.LRRCdmProtobufConverter_swift : NSObject

+ (id)deserializeMDRequestFromJsonWithProtoJson:(id)arg1;
+ (id)deserializeMDResponseFromJsonWithProtoJson:(id)arg1;
+ (id)deserializeMRRequestFromJsonWithProtoJson:(id)arg1;
+ (id)deserializeMRResponseFromJsonWithProtoJson:(id)arg1;
+ (id)deserializeMatchingSpanFromJsonWithProtoJson:(id)arg1;
+ (id)deserializeNluRequestFromJsonWithProtoJson:(id)arg1;
+ (id)deserializeNluResponseFromJsonWithProtoJson:(id)arg1;
+ (id)deserializeUsoGraphFromJsonWithProtoJson:(id)arg1;
+ (id)serializeNluRequestToJsonWithProtoData:(id)arg1;
+ (id)serializeNluResponseToJsonWithProtoData:(id)arg1;
+ (id)serializeUsoGraphToJsonWithProtoData:(id)arg1;

- (id)init;

@end
