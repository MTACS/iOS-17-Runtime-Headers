
@interface LRRCdmProtobufConverter : NSObject

+ (id)deserializeMDRequestFromJson:(id)arg1;
+ (id)deserializeMDResponseFromJson:(id)arg1;
+ (id)deserializeMRRequestFromJson:(id)arg1;
+ (id)deserializeMRResponseFromJson:(id)arg1;
+ (id)deserializeNluRequestFromJson:(id)arg1;
+ (id)deserializeNluResponseFromJson:(id)arg1;
+ (id)deserializeUsoGraphFromJson:(id)arg1;
+ (id)serializeNluRequestToJson:(id)arg1;
+ (id)serializeUsoGraphToJson:(id)arg1;

@end
