
@interface SISensitiveConditionsSet : NSObject <NSCopying> {
    unsigned long long  _bitmask;
}

+ (id)fromDeviceSensitivityState:(int)arg1;

- (void)addCondition:(int)arg1;
- (void)addDeviceSensitivityState:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)differenceSetFrom:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBitMask:(unsigned long long)arg1;
- (id)intersectionSetWith:(id)arg1;
- (bool)intersectsWith:(id)arg1;
- (bool)isConditionSet:(int)arg1;
- (bool)isDeviceSensitivityStateSet:(int)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConditionsSet:(id)arg1;
- (void)removeConditions:(id)arg1;
- (void)removeDeviceSensitivityState:(int)arg1;
- (id)unionSetWith:(id)arg1;

@end
