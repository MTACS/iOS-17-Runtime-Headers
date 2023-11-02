
@interface NSConcreteSetChange : NSSetChange {
    unsigned long long  _changeType;
    id  _value;
}

- (unsigned long long)changeType;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 object:(id)arg2;
- (id)value;

@end
