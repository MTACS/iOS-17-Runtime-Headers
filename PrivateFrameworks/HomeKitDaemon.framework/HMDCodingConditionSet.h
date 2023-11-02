
@interface HMDCodingConditionSet : NSObject <NSCopying> {
    unsigned long long  _bitmask;
    HMDManagedObjectCodingModel * _model;
}

- (void).cxx_destruct;
- (void)addCondition:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithModel:(id)arg1;
- (id)initWithModel:(id)arg1 conditions:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)removeCondition:(id)arg1;

@end
