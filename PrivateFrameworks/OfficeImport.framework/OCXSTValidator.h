
@interface OCXSTValidator : NSObject {
    NSMutableDictionary * _simpleTypeMap;
}

+ (bool)isValidValue:(id)arg1 simpleType:(unsigned long long)arg2;
+ (id)simpleType:(unsigned long long)arg1 integerValue:(long long)arg2;
+ (id)simpleType:(unsigned long long)arg1 stringValue:(id)arg2;
+ (id)validateIntegerValue:(long long)arg1 minValue:(long long)arg2 maxValue:(long long)arg3;
+ (id)validator;

- (void).cxx_destruct;
- (id)init;
- (id)simpleTypeMap;

@end
