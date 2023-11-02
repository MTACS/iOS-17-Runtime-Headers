
@interface HKHealthRecordsIngestionOutcome : NSObject <NSCopying, NSSecureCoding> {
    NSString * _analyticsString;
    NSArray * _perAccountOutcomes;
    NSError * _taskError;
    NSNumber * _taskRuntime;
    bool  _taskSuccess;
}

@property (nonatomic, readonly, copy) NSString *analyticsString;
@property (nonatomic, readonly, copy) NSArray *perAccountOutcomes;
@property (nonatomic, readonly, copy) NSError *taskError;
@property (nonatomic, readonly, copy) NSNumber *taskRuntime;
@property (nonatomic, readonly) bool taskSuccess;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskSuccess:(bool)arg1 taskError:(id)arg2 taskRuntime:(double)arg3 perAccountOutcomes:(id)arg4 analyticsString:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)perAccountOutcomes;
- (id)taskError;
- (id)taskRuntime;
- (bool)taskSuccess;

@end
