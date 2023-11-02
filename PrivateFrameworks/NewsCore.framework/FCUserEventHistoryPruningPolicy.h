
@interface FCUserEventHistoryPruningPolicy : NSObject {
    long long  _type;
    unsigned long long  _value;
}

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long value;

- (id)description;
- (id)initWithType:(long long)arg1 value:(unsigned long long)arg2;
- (void)setType:(long long)arg1;
- (void)setValue:(unsigned long long)arg1;
- (long long)type;
- (unsigned long long)value;

@end
