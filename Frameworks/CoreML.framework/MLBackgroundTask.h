
@interface MLBackgroundTask : NSObject <NSCopying, NSSecureCoding> {
    NSString * _taskIdentifier;
}

@property (nonatomic, copy) NSString *taskIdentifier;

+ (bool)cancelAllTasks;
+ (bool)cancelTaskWithIdentifier:(id)arg1;
+ (bool)scheduleTask:(id)arg1;
+ (bool)supportsSecureCoding;
+ (bool)taskIsScheduledWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)activityForScheduling;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setTaskIdentifier:(id)arg1;
- (id)taskIdentifier;

@end
