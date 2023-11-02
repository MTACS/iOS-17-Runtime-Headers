
@interface WRWorkflow : NSObject {
    NSArray * _allSignposts;
    SignpostSupportSubsystemCategoryAllowlist * _allowList;
    NSArray * _endSignpostGroups;
    NSString * _name;
    double  _overallDiagnosticThresholdIntervalSeconds;
    NSArray * _startSignposts;
}

@property (readonly) NSArray *allSignposts;
@property (readonly) SignpostSupportSubsystemCategoryAllowlist *allowList;
@property (readonly) NSArray *endSignpostGroups;
@property (readonly) bool hasOverallDiagnosticThresholdInterval;
@property (readonly) NSString *name;
@property (readonly) double overallDiagnosticThresholdIntervalSeconds;
@property (readonly) NSArray *startSignposts;

+ (id)allWorkflows;
+ (id)workflowWithName:(id)arg1;

- (void).cxx_destruct;
- (id)allSignposts;
- (id)allowList;
- (id)debugDescription;
- (id)endSignpostGroups;
- (bool)hasOverallDiagnosticThresholdInterval;
- (unsigned long long)hash;
- (id)initWithPlist:(id)arg1 telemetryEnabled:(bool)arg2 diagnosticsEnabled:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (double)overallDiagnosticThresholdIntervalSeconds;
- (id)startSignposts;

@end
