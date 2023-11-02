
@protocol INJSONSerializable <NSObject>

@optional

+ (id)_intents_decodeWithJSONDecoder:(INJSONDecoder *)arg1 codableDescription:(INCodableDescription *)arg2 from:(id)arg3;

- (void)_intents_decodeWithJSONDecoder:(INJSONDecoder *)arg1 codableDescription:(INCodableDescription *)arg2 from:(id)arg3;
- (id)_intents_encodeWithJSONEncoder:(INJSONEncoder *)arg1 codableDescription:(INCodableDescription *)arg2;

@end
