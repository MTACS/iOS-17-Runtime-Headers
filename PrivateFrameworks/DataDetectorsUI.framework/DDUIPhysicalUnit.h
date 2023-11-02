
@interface DDUIPhysicalUnit : NSObject {
    double  _a;
    NSString * _abbreviation;
    double  _b;
    DDUIPhysicalUnitGroup * _group;
    unsigned long long  _groupType;
    NSString * _identifier;
    NSString * _name;
    NSArray * _restrictionLocales;
}

@property (readonly) double a;
@property (readonly) NSString *abbreviation;
@property (readonly) double b;
@property DDUIPhysicalUnitGroup *group;
@property (readonly) unsigned long long groupType;
@property (readonly) NSString *identifier;
@property (readonly) NSString *name;
@property (readonly) NSArray *restrictionLocales;

+ (id)unitWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (double)a;
- (id)abbreviation;
- (double)b;
- (double)baseToUnit:(double)arg1;
- (id)floatFormatString:(id)arg1 precision:(long long)arg2 exp:(bool)arg3;
- (id)group;
- (unsigned long long)groupType;
- (id)identifier;
- (id)initWithName:(id)arg1 abbreviation:(id)arg2 restrictionLocales:(id)arg3 groupType:(unsigned long long)arg4 a:(double)arg5 b:(double)arg6;
- (bool)inputValueIsValid:(double)arg1 fromUnit:(id)arg2;
- (bool)isUKMeasurement;
- (bool)keepZeroValue;
- (id)localizedConvertedValueFormat:(id)arg1;
- (id)localizedConvertedValueFrom:(double)arg1 unit:(id)arg2;
- (id)localizedMenuTitleFormat:(id)arg1;
- (id)localizedTitleFormat:(id)arg1;
- (id)localizedUnitNameWithValue:(double)arg1 unit:(id)arg2;
- (id)name;
- (id)patchedVariantName;
- (id)restrictionLocales;
- (void)setGroup:(id)arg1;
- (double)unitToBase:(double)arg1;
- (id)valueAsString:(double)arg1;
- (double)valueFrom:(double)arg1 unit:(id)arg2;

@end
