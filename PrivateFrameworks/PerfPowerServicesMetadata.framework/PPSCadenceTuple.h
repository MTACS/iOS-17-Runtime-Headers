
@interface PPSCadenceTuple : NSObject {
    int  _type;
    unsigned long long  _value;
}

@property (readonly) int type;
@property (readonly) unsigned long long value;

+ (id)cadenceTupleWithJSONObject:(id)arg1;
+ (bool)isValidCadenceTupleJSON:(id)arg1;

- (id)initWithCadenceType:(int)arg1 value:(unsigned long long)arg2;
- (int)type;
- (unsigned long long)value;

@end
