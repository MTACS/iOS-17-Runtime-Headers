
@interface ATXAnchorModelSamplingGroup : NSObject {
    NSArray * _anchorWhitelist;
    long long  _samplingGroupId;
}

@property (nonatomic, readonly) NSArray *anchorWhitelist;
@property (nonatomic, readonly) long long samplingGroupId;

+ (long long)assignSamplingGroupToUserAndPersistToDefaults:(id)arg1;
+ (id)getSamplingGroupForDataCollection;
+ (unsigned long long)numSamplingGroups;
+ (void)resetSamplingGroupAssignmentForUser;
+ (id)samplingGroupFromSamplingGroupId:(long long)arg1;
+ (long long)selectSamplingGroupForUser;

- (void).cxx_destruct;
- (id)anchorWhitelist;
- (id)description;
- (id)init;
- (id)initWithAnchorWhitelist:(id)arg1 samplingGroupId:(long long)arg2;
- (long long)samplingGroupId;

@end
