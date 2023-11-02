
@interface CKSchedulerActivity : NSObject <CKPropertiesDescription, NSCopying> {
    CKXPCActivity * _ckXPCActivity;
    CKContainerID * _containerID;
    NSDate * _earliestStartDate;
    unsigned long long  _expectedTransferSizeBytes;
    NSString * _identifier;
    CKContainer * _nullableContainer;
    bool  _overrideRateLimiting;
    long long  _priority;
    NSArray * _relatedApplicationBundleIdentifiers;
    bool  _shouldDefer;
    bool  _userRequestedBackupTask;
    NSObject<OS_xpc_object> * _xpcActivityCriteriaOverrides;
}

@property (copy) NSDictionary *additionalXPCActivityCriteria;
@property (retain) CKXPCActivity *ckXPCActivity;
@property (retain) CKContainer *container;
@property (nonatomic, copy) CKContainerID *containerID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSDate *earliestStartDate;
@property unsigned long long expectedTransferSizeBytes;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) CKContainer *nullableContainer;
@property bool overrideRateLimiting;
@property (nonatomic) long long priority;
@property (copy) NSArray *relatedApplicationBundleIdentifiers;
@property bool shouldDefer;
@property (readonly) Class superclass;
@property bool userRequestedBackupTask;
@property (copy) NSObject<OS_xpc_object> *xpcActivityCriteriaOverrides;

+ (id)defaultRelatedApplicationBundleIdentifiersForContainer:(id)arg1;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)additionalXPCActivityCriteria;
- (id)ckXPCActivity;
- (id)container;
- (id)containerID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)earliestStartDate;
- (unsigned long long)expectedTransferSizeBytes;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 container:(id)arg2 containerID:(id)arg3 priority:(long long)arg4;
- (id)initWithIdentifier:(id)arg1 container:(id)arg2 priority:(long long)arg3;
- (id)initWithIdentifier:(id)arg1 containerID:(id)arg2 priority:(long long)arg3;
- (id)nullableContainer;
- (bool)overrideRateLimiting;
- (long long)priority;
- (id)redactedDescription;
- (id)relatedApplicationBundleIdentifiers;
- (void)setAdditionalXPCActivityCriteria:(id)arg1;
- (void)setCkXPCActivity:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setEarliestStartDate:(id)arg1;
- (void)setExpectedTransferSizeBytes:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOverrideRateLimiting:(bool)arg1;
- (void)setPriority:(long long)arg1;
- (void)setRelatedApplicationBundleIdentifiers:(id)arg1;
- (void)setShouldDefer:(bool)arg1;
- (void)setUserRequestedBackupTask:(bool)arg1;
- (void)setXpcActivityCriteriaOverrides:(id)arg1;
- (bool)shouldDefer;
- (bool)userRequestedBackupTask;
- (id)xpcActivityCriteriaOverrides;

@end
