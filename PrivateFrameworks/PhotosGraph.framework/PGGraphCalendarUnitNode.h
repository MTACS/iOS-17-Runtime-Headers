
@interface PGGraphCalendarUnitNode : PGGraphOptimizedNode <MAUniquelyIdentifiableNode, PGAssetCollectionFeature> {
    unsigned int  _calendarUnit;
    unsigned int  _calendarUnitValue;
}

@property (nonatomic, readonly) long long calendarUnitValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) unsigned long long featureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MANodeFilter *uniquelyIdentifyingFilter;

+ (id)dayFilter;
+ (long long)encodedMonthDayForMonth:(long long)arg1 day:(long long)arg2;
+ (id)monthDayFilter;
+ (struct PGCalendarUnitMonthDayValue { long long x1; long long x2; })monthDayValueForMonthDayNode:(id)arg1;
+ (struct PGCalendarUnitMonthDayValue { long long x1; long long x2; })monthDayValueForMonthDayNodeCalendarUnitValue:(long long)arg1;
+ (id)monthFilter;
+ (id)propertiesForMonth:(long long)arg1 day:(long long)arg2;
+ (id)propertiesWithCalendarUnitValue:(long long)arg1;
+ (id)weekOfMonthFilter;
+ (id)weekOfYearFilter;
+ (id)yearFilter;

- (long long)calendarUnitValue;
- (id)collection;
- (id)description;
- (unsigned short)domain;
- (id)featureIdentifier;
- (unsigned long long)featureType;
- (bool)hasProperties:(id)arg1;
- (id)initWithCalendarUnit:(unsigned long long)arg1 value:(long long)arg2;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)label;
- (id)name;
- (id)propertyDictionary;
- (id)propertyForKey:(id)arg1;
- (id)uniquelyIdentifyingFilter;

@end
