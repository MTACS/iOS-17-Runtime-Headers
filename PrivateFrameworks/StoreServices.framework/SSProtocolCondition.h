
@interface SSProtocolCondition : NSObject {
    long long  _operator;
    id  _value;
}

+ (id)newConditionWithDictionary:(id)arg1;

- (void)dealloc;
- (bool)evaluateWithContext:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
