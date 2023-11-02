
@interface ATXMinimalSlotResolutionParameters : NSObject <NSCopying> {
    unsigned long long  _paramCount;
    unsigned long long  _paramHash;
    unsigned long long  _slotHash;
    NSUUID * _slotSetUuid;
}

@property (nonatomic, readonly) unsigned long long paramCount;
@property (nonatomic, readonly) unsigned long long slotHash;

- (void).cxx_destruct;
- (id)actionAndSlotSet;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithAction:(id)arg1 slots:(id)arg2;
- (id)initWithParameterHash:(unsigned long long)arg1 slotHash:(unsigned long long)arg2 uuid:(id)arg3 paramCount:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)paramCount;
- (unsigned long long)slotHash;

@end
