
@interface LBFBiomeStoreDataConverter : NSObject

+ (id)createDprivacydEvent:(id)arg1 identifiers:(id)arg2 timestamp:(id)arg3;
+ (id)createLighthousePluginEvent:(id)arg1 identifiers:(id)arg2 timestamp:(id)arg3;
+ (id)createMLRuntimedEvent:(id)arg1 identifiers:(id)arg2 timestamp:(id)arg3;
+ (id)createTrialIdentifiers:(id)arg1;
+ (id)createTrialdEvent:(id)arg1 identifiers:(id)arg2 timestamp:(id)arg3;
+ (id)protoFromBiomeLighthousePluginEvent:(id)arg1;
+ (id)protoFromBiomeMlruntimedEvent:(id)arg1;
+ (id)protoFromBiomeTrialdEvent:(id)arg1;
+ (id)protoFromTrialIdentifier:(id)arg1;
+ (id)serializeBitacoraStateToJson:(id)arg1;

@end
