
@interface HREActionRangeVarianceRule : HRECharacteristicActionVarianceRule {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _allowedTargetValues;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } allowedTargetValues;

+ (id)rangeVarianceWithType:(id)arg1 max:(unsigned long long)arg2;
+ (id)rangeVarianceWithType:(id)arg1 min:(unsigned long long)arg2;
+ (id)rangeVarianceWithType:(id)arg1 min:(unsigned long long)arg2 max:(unsigned long long)arg3;
+ (id)rangeVarianceWithType:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

- (id)_initWithType:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })allowedTargetValues;
- (bool)passesForAction:(id)arg1;
- (bool)passesWithTargetValue:(id)arg1;

@end
