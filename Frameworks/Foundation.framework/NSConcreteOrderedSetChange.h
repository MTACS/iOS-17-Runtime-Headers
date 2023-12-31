
@interface NSConcreteOrderedSetChange : NSOrderedSetChange {
    unsigned long long  _changeType;
    unsigned long long  _destinationIndex;
    unsigned long long  _sourceIndex;
    id  _value;
}

- (unsigned long long)changeType;
- (void)dealloc;
- (unsigned long long)destinationIndex;
- (id)initWithType:(unsigned long long)arg1 sourceIndex:(unsigned long long)arg2 destinationIndex:(unsigned long long)arg3 value:(id)arg4;
- (unsigned long long)sourceIndex;
- (id)value;

@end
