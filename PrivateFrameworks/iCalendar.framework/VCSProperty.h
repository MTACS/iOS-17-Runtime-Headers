
@interface VCSProperty : NSObject {
    NSString * _name;
    NSMutableArray * _values;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) VCSPropertyValue *singleValue;
@property (nonatomic, readonly) NSArray *values;

- (void).cxx_destruct;
- (id)initClassificationProperty:(id)arg1 withParseState:(id)arg2 property:(const struct { long long x1; unsigned long long x2; unsigned long long x3; bool x4; id x5; }*)arg3;
- (id)initEncodedTextProperty:(id)arg1 withParseState:(id)arg2 property:(const struct { long long x1; unsigned long long x2; unsigned long long x3; bool x4; id x5; }*)arg3;
- (id)initISO8061DateListProperty:(id)arg1 withParseState:(id)arg2 property:(const struct { long long x1; unsigned long long x2; unsigned long long x3; bool x4; id x5; }*)arg3;
- (id)initISO8061Property:(id)arg1 withParseState:(id)arg2 property:(const struct { long long x1; unsigned long long x2; unsigned long long x3; bool x4; id x5; }*)arg3;
- (id)initIntProperty:(id)arg1 withParseState:(id)arg2 property:(const struct { long long x1; unsigned long long x2; unsigned long long x3; bool x4; id x5; }*)arg3;
- (id)initKeywordListProperty:(id)arg1 withParseState:(id)arg2 property:(const struct { long long x1; unsigned long long x2; unsigned long long x3; bool x4; id x5; }*)arg3;
- (id)initRFC822AddressProperty:(id)arg1 withParseState:(id)arg2 property:(const struct { long long x1; unsigned long long x2; unsigned long long x3; bool x4; id x5; }*)arg3;
- (id)initRecurrenceProperty:(id)arg1 withParseState:(id)arg2 property:(const struct { long long x1; unsigned long long x2; unsigned long long x3; bool x4; id x5; }*)arg3;
- (id)initStatusProperty:(id)arg1 withParseState:(id)arg2 property:(const struct { long long x1; unsigned long long x2; unsigned long long x3; bool x4; id x5; }*)arg3;
- (id)initTranspProperty:(id)arg1 withParseState:(id)arg2 property:(const struct { long long x1; unsigned long long x2; unsigned long long x3; bool x4; id x5; }*)arg3;
- (id)initURIProperty:(id)arg1 withParseState:(id)arg2 property:(const struct { long long x1; unsigned long long x2; unsigned long long x3; bool x4; id x5; }*)arg3;
- (id)initWithName:(id)arg1 rawValue:(id)arg2 type:(unsigned long long)arg3;
- (id)initWithName:(id)arg1 rawValues:(id)arg2 type:(unsigned long long)arg3;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)initWithName:(id)arg1 values:(id)arg2;
- (id)initWithVCSLine:(id)arg1 parseState:(id)arg2;
- (id)name;
- (id)singleValue;
- (id)values;

@end
