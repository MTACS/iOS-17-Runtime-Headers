
@interface PGTitleSpecLocationArgument : PGTitleSpecArgument {
    bool  _filterLocations;
    unsigned long long  _lineBreakBehavior;
    NSString * _locationName;
    unsigned long long  _type;
    NSSet * _usedLocationNodes;
}

@property (readonly) bool filterLocations;
@property unsigned long long lineBreakBehavior;
@property (nonatomic, retain) NSString *locationName;
@property (readonly) unsigned long long type;
@property (retain) NSSet *usedLocationNodes;

+ (id)argumentWithLocationType:(unsigned long long)arg1 filterLocations:(bool)arg2;
+ (id)argumentWithLocationTypeLocationForLocationName:(id)arg1;

- (void).cxx_destruct;
- (id)_generateBusinessItemTitleWithMomentNodes:(id)arg1 locationHelper:(id)arg2;
- (id)_generateLocationTitleWithOptions:(id)arg1 locationHelper:(id)arg2;
- (id)_resolvedStringWithMomentNodes:(id)arg1 argumentEvaluationContext:(id)arg2;
- (id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2 argumentEvaluationContext:(id)arg3;
- (bool)filterLocations;
- (id)initWithLocationType:(unsigned long long)arg1 filterLocations:(bool)arg2;
- (unsigned long long)lineBreakBehavior;
- (id)locationName;
- (void)setLineBreakBehavior:(unsigned long long)arg1;
- (void)setLocationName:(id)arg1;
- (void)setUsedLocationNodes:(id)arg1;
- (unsigned long long)type;
- (id)usedLocationNodes;

@end
