
@interface TCDumpEnum : NSObject {
    NSMutableDictionary * mNameToValueMap;
    NSString * mTypeName;
    NSMutableDictionary * mValueToNameMap;
}

- (void).cxx_destruct;
- (id)initWithTypeName:(id)arg1 pairs:(struct TCDumpEnumPair { int x1; id x2; }*)arg2;
- (id)nameForValue:(int)arg1;
- (id)typeName;
- (id)valueForName:(id)arg1;

@end
