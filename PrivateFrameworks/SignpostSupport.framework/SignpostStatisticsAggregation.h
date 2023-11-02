
@interface SignpostStatisticsAggregation : NSObject {
    NSArray * _aggregatedSignpostObjects;
    NSString * _aggregationIdentifier;
    NSDictionary * _aggregationIdentifierToChildAggregationDict;
    struct { 
        unsigned long long mct; 
        double ns; 
        double ms; 
        double sec; 
    }  _averageDuration;
    NSString * _category;
    unsigned long long  _count;
    NSString * _name;
    struct { 
        unsigned long long mct; 
        double ns; 
        double ms; 
        double sec; 
    }  _stddevDuration;
    NSString * _subsystem;
    unsigned char  _tier;
    float  _timeBaseRatio;
    struct { 
        unsigned long long mct; 
        double ns; 
        double ms; 
        double sec; 
    }  _totalDuration;
}

@property (nonatomic, readonly) NSArray *aggregatedSignpostObjects;
@property (nonatomic, readonly) NSString *aggregationIdentifier;
@property (nonatomic, readonly) NSDictionary *aggregationIdentifierToChildAggregationDict;
@property (nonatomic, readonly) struct { unsigned long long x1; double x2; double x3; double x4; } averageDuration;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct { unsigned long long x1; double x2; double x3; double x4; } stddevDuration;
@property (nonatomic, readonly) NSString *subsystem;
@property (nonatomic, readonly) unsigned char tier;
@property (nonatomic, readonly) NSString *tierString;
@property (readonly) float timeBaseRatio;
@property (nonatomic, readonly) struct { unsigned long long x1; double x2; double x3; double x4; } totalDuration;

+ (id)statisticsAggregationForObjects:(id)arg1;

- (void).cxx_destruct;
- (void)_calculateStats;
- (id)_dictRepresentation;
- (id)_initWithSignpostObjects:(id)arg1 tier:(unsigned char)arg2;
- (id)aggregatedSignpostObjects;
- (id)aggregationForTimeInterval:(id)arg1 containedOnly:(bool)arg2;
- (id)aggregationIdentifier;
- (id)aggregationIdentifierToChildAggregationDict;
- (struct { unsigned long long x1; double x2; double x3; double x4; })averageDuration;
- (id)category;
- (unsigned long long)count;
- (id)debugDescription;
- (id)jsonDescription:(unsigned long long)arg1;
- (id)name;
- (struct { unsigned long long x1; double x2; double x3; double x4; })stddevDuration;
- (id)subsystem;
- (unsigned char)tier;
- (id)tierString;
- (float)timeBaseRatio;
- (struct { unsigned long long x1; double x2; double x3; double x4; })totalDuration;

@end
