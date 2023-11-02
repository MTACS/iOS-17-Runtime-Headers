
@interface WRSignpost : NSObject {
    NSString * _category;
    int  _diagnosticThresholdCount;
    double  _diagnosticThresholdIntervalSeconds;
    NSArray * _environmentFieldNames;
    NSString * _individuationFieldName;
    NSString * _name;
    NSString * _subsystem;
}

@property (readonly) NSString *category;
@property (readonly) int diagnosticThresholdCount;
@property (readonly) double diagnosticThresholdIntervalSeconds;
@property (readonly) NSArray *environmentFieldNames;
@property (readonly) bool hasDiagnosticThresholdCount;
@property (readonly) bool hasDiagnosticThresholdInterval;
@property (readonly) NSString *individuationFieldName;
@property (readonly) NSString *name;
@property (readonly) NSString *subsystem;

- (void).cxx_destruct;
- (id)category;
- (long long)compare:(id)arg1;
- (id)debugDescription;
- (int)diagnosticThresholdCount;
- (double)diagnosticThresholdIntervalSeconds;
- (id)environmentFieldNames;
- (bool)hasDiagnosticThresholdCount;
- (bool)hasDiagnosticThresholdInterval;
- (unsigned long long)hash;
- (id)individuationFieldName;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3 individuationFieldName:(id)arg4 environmentFieldNames:(id)arg5 diagnosticThresholdCount:(int)arg6 diagnosticThresholdIntervalSeconds:(double)arg7;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)subsystem;

@end
