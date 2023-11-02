
@interface LBFProtoConverter : NSObject

+ (id)createBitacoraBmltIdentifiers:(id)arg1;
+ (id)createBitacoraExperimentIdentifiers:(id)arg1;
+ (id)createLighthousePluginEventStatus:(id)arg1;
+ (id)createLighthousePluginProto:(id)arg1;
+ (id)createLighthousePluginProtoData:(id)arg1;
+ (id)createMLRuntimeProto:(id)arg1;
+ (id)createMLRuntimeProtoData:(id)arg1;
+ (id)createMLRuntimeScheduleStatus:(id)arg1;
+ (id)createMLRuntimeTaskEvent:(id)arg1;
+ (id)createTrialIdentifiers:(id)arg1;
+ (id)createTrialdProto:(id)arg1;
+ (id)createTrialdProtoData:(id)arg1;
+ (id)deserializeLighthousePluginProto:(id)arg1;
+ (id)deserializeMLRuntimeProto:(id)arg1;
+ (id)deserializeTrialdProto:(id)arg1;
+ (id)serializeBitacoraStateToJson:(id)arg1;
+ (id)serializeLighthousePluginProtoToJson:(id)arg1;
+ (id)serializeMLRuntimeProtoToJson:(id)arg1;
+ (id)serializeTrialdProtoToJson:(id)arg1;

@end
