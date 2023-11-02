
@protocol MPCPlaybackEngineEventPayloadValueJSONConvertible <NSObject>

@required

+ (id)payloadValueFromJSONValue:(id <MPCPlaybackEngineEventPayloadJSONValue>)arg1;

- (<MPCPlaybackEngineEventPayloadJSONValue> *)mpc_jsonValue;

@end
