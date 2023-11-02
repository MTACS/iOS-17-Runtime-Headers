
@interface HKSeriesSample : HKSample {
    _Atomic unsigned int  _count;
    bool  _frozen;
}

@property (readonly) unsigned long long count;
@property (getter=_isFrozen, setter=_setFrozen:, nonatomic) bool frozen;

+ (bool)supportsSecureCoding;

- (bool)_isFrozen;
- (void)_setCount:(unsigned long long)arg1;
- (void)_setFrozen:(bool)arg1;
- (bool)_shouldNotifyOnInsert;
- (id)_validateSample;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)_valueDescription;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
