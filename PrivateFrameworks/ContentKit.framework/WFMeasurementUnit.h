
@interface WFMeasurementUnit : NSObject

+ (id)availableUnitTypes;
+ (id)availableUnitsForUnitType:(id)arg1;
+ (id)defaultUnitForUnitType:(id)arg1;
+ (id)localizedStringForUnitType:(id)arg1;
+ (Class)unitClassForUnitType:(id)arg1;
+ (id)unitFromString:(id)arg1;
+ (id)unitFromString:(id)arg1 unitType:(id)arg2 caseSensitive:(bool)arg3;
+ (id)unitTypeForUnitClass:(Class)arg1;
+ (id)unitTypeFromLinkMeasurementUnitType:(long long)arg1;
+ (id)unitTypeMap;
+ (bool)usesMetricSystemForUnitType:(id)arg1;

@end
