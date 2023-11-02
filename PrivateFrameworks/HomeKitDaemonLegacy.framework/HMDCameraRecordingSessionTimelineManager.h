
@interface HMDCameraRecordingSessionTimelineManager : HMFObject <HMFLogging> {
    NSMutableArray * _doorbellActiveDateIntervals;
    NSDate * _fragmentCreationReferenceDate;
    double  _fragmentDuration;
    NSString * _logIdentifier;
    NSMutableArray * _motionActiveDateIntervals;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSMutableArray *doorbellActiveDateIntervals;
@property (readonly, copy) NSDate *fragmentCreationReferenceDate;
@property (readonly) double fragmentDuration;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *logIdentifier;
@property (readonly) NSMutableArray *motionActiveDateIntervals;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)creationDateForFragmentAtTimeOffset:(double)arg1;
- (id)doorbellActiveDateIntervals;
- (id)fragmentCreationReferenceDate;
- (double)fragmentDuration;
- (void)handleDoorbellDidActivateAtDate:(id)arg1;
- (void)handleMotionActive:(bool)arg1 didChangeAtDate:(id)arg2;
- (id)initWithWorkQueue:(id)arg1 fragmentDuration:(double)arg2 fragmentCreationReferenceDate:(id)arg3 logIdentifier:(id)arg4;
- (bool)isDoorbellTriggerActiveAtAnyTimeAfterOffset:(double)arg1;
- (bool)isDoorbellTriggerActiveAtAnyTimeAfterOffset:(double)arg1 forDuration:(double)arg2;
- (bool)isMotionTriggerActiveAtAnyTimeAfterOffset:(double)arg1;
- (bool)isMotionTriggerActiveAtAnyTimeAfterOffset:(double)arg1 forDuration:(double)arg2;
- (id)logIdentifier;
- (id)motionActiveDateIntervals;
- (id)workQueue;

@end
