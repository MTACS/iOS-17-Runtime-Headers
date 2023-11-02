
@interface HMDCompositeSettingIntegerConstraint : NSObject <HMDCompositeSettingConstraint> {
    long long  _max;
    long long  _min;
    long long  _step;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long max;
@property (readonly) long long min;
@property (readonly) long long step;
@property (readonly) Class superclass;

- (id)initWithMaxValue:(long long)arg1 minValue:(long long)arg2 stepValue:(long long)arg3;
- (bool)isValidValue:(id)arg1 error:(id*)arg2;
- (long long)max;
- (long long)min;
- (long long)step;

@end
