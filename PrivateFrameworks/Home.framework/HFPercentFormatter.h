
@interface HFPercentFormatter : NSNumberFormatter <HFUnitFormatter, NSCopying> {
    NSNumber * _maximumValue;
    NSNumber * _minimumValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *maximumValue;
@property (nonatomic, copy) NSNumber *minimumValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *unitDescription;

+ (id)_percentageFromValue:(id)arg1 forMinimumValue:(id)arg2 maximumValue:(id)arg3;
+ (id)_valueFromPercentage:(id)arg1 forMinimumValue:(id)arg2 maximumValue:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 error:(out id*)arg4;
- (id)init;
- (id)initWithMinimumValue:(id)arg1 maximumValue:(id)arg2;
- (id)maximumValue;
- (id)minimumValue;
- (void)setMaximumValue:(id)arg1;
- (void)setMinimumValue:(id)arg1;
- (id)stringForNormalizedObjectValue:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringForObjectValue:(id)arg1 withUnit:(bool)arg2;
- (id)stringForRelativePercentValue:(id)arg1;
- (id)unitDescription;

@end
