
@interface PPSRounding : NSObject {
    int  _type;
    unsigned long long  _value;
}

@property (readonly) int type;
@property (readonly) unsigned long long value;

+ (bool)isValidRounding:(int)arg1 value:(unsigned long long)arg2;
+ (bool)isValidRoundingJSON:(id)arg1;
+ (id)roundDown;
+ (id)roundNearest;
+ (id)roundUp;
+ (id)roundingWithJSONObject:(id)arg1;
+ (id)roundingWithProto:(id)arg1;

- (id)initWithType:(int)arg1 value:(unsigned long long)arg2;
- (id)json;
- (id)proto;
- (int)type;
- (unsigned long long)value;

@end
