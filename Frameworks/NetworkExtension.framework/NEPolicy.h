
@interface NEPolicy : NSObject <NEPrettyDescription> {
    NSArray * _conditions;
    unsigned int  _order;
    NEPolicyResult * _result;
}

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)init;
- (id)initWithOrder:(unsigned int)arg1 result:(id)arg2 conditions:(id)arg3;

@end
