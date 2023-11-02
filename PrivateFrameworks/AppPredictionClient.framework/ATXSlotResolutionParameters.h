
@interface ATXSlotResolutionParameters : NSObject <NSCopying> {
    ATXAction * _action;
    unsigned long long  _hash;
    ATXSlotSet * _slots;
    NSArray * _values;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAction:(id)arg1 slots:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
