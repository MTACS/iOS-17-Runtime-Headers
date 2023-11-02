
@interface CPLResourceTransferTask : NSObject <NSSecureCoding> {
    bool  _cancelled;
    CPLResourceTransferTaskOptions * _options;
    CPLResource * _resource;
    NSString * _taskIdentifier;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (getter=isHighPriority, nonatomic) bool highPriority;
@property (nonatomic) unsigned long long intent;
@property (nonatomic, copy) CPLResourceTransferTaskOptions *options;
@property (nonatomic, readonly) CPLResource *resource;
@property (nonatomic, readonly, copy) NSString *taskIdentifier;

+ (id)descriptionForIntent:(unsigned long long)arg1;
+ (bool)isForegroundOperationForIntent:(unsigned long long)arg1;
+ (bool)isHighPriorityForIntent:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)cancelTask;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithResource:(id)arg1 taskIdentifier:(id)arg2;
- (unsigned long long)intent;
- (bool)isCancelled;
- (bool)isEqual:(id)arg1;
- (bool)isHighPriority;
- (void)launch;
- (id)options;
- (id)resource;
- (void)setHighPriority:(bool)arg1;
- (void)setIntent:(unsigned long long)arg1;
- (void)setOptions:(id)arg1;
- (void)setTaskIdentifier:(id)arg1;
- (id)taskIdentifier;

@end
