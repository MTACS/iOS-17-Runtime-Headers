
@interface _HKCFGNonTerminalNode : _HKCFGNode {
    NSArray * _nodes;
    _HKCFGReplacementRule * _rule;
    id  _value;
}

@property (nonatomic, readonly) _HKCFGReplacementRule *rule;

+ (id)nodeWithChildren:(id)arg1 rule:(id)arg2 rangeOfString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

- (void).cxx_destruct;
- (id)evaluate;
- (id)rule;

@end
