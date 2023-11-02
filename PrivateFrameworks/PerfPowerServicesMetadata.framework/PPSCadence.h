
@interface PPSCadence : NSObject {
    NSArray * _cadenceTuples;
}

@property (readonly) NSArray *cadenceTuples;

+ (id)cadenceEventSBC;
+ (id)cadenceEventXPCWithFrequency:(int)arg1;
+ (id)cadenceInit;
+ (id)cadenceInit_EventSBC;
+ (id)cadenceWithJSONObject:(id)arg1;
+ (id)cadenceWithProto:(id)arg1;
+ (bool)isValidCadenceJSON:(id)arg1;

- (void).cxx_destruct;
- (id)cadenceTuples;
- (id)initWithCadenceTuples:(id)arg1;
- (id)json;
- (id)proto;

@end
