
@interface TRITaskRecord : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _capabilities;
    NSArray * _dependencies;
    NSDate * _startDate;
    NSArray * _tags;
    <TRITask> * _task;
    NSNumber * _taskId;
}

@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly) NSArray *dependencies;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) <TRITask> *task;
@property (nonatomic, readonly) NSNumber *taskId;

+ (bool)supportsSecureCoding;
+ (id)taskRecordWithTaskId:(id)arg1 task:(id)arg2 startDate:(id)arg3 dependencies:(id)arg4 capabilities:(unsigned long long)arg5 tags:(id)arg6;

- (void).cxx_destruct;
- (unsigned long long)capabilities;
- (id)copyWithReplacementCapabilities:(unsigned long long)arg1;
- (id)copyWithReplacementDependencies:(id)arg1;
- (id)copyWithReplacementStartDate:(id)arg1;
- (id)copyWithReplacementTags:(id)arg1;
- (id)copyWithReplacementTask:(id)arg1;
- (id)copyWithReplacementTaskId:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)defaultEncodeWithCoder:(id)arg1;
- (id)dependencies;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskId:(id)arg1 task:(id)arg2 startDate:(id)arg3 dependencies:(id)arg4 capabilities:(unsigned long long)arg5 tags:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTaskRecord:(id)arg1;
- (id)startDate;
- (id)tags;
- (id)task;
- (id)taskId;

@end
