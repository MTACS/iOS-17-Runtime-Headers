
@interface VCIDRScheduler : NSObject {
    unsigned int  _basePeriodMs;
    unsigned int  _captureFramerate;
    unsigned int  _framesPerBasePeriod;
    NSMutableDictionary * _schedulerGroups;
    NSMutableArray * _schedulerItems;
    NSArray * _streams;
}

@property (nonatomic, readonly) unsigned int basePeriodMs;
@property (nonatomic, readonly) unsigned int captureFramerate;

+ (unsigned int)computeGcdForX:(unsigned int)arg1 y:(unsigned int)arg2;

- (unsigned int)basePeriodMs;
- (unsigned int)captureFramerate;
- (void)computeBasePeriod;
- (bool)computeCaptureFramerate;
- (void)computeGroupList;
- (void)computeSchedulerItemList;
- (void)computeSchedulerItemsBudget;
- (void)computeSchedulerItemsPosition;
- (void)computeStreamsIDRPosition;
- (void)dealloc;
- (id)description;
- (id)initWithStreams:(id)arg1 captureFramerate:(unsigned int)arg2;
- (void)placeRemainingItems:(id)arg1 placedItems:(id)arg2 leftItem:(id)arg3 rightItem:(id)arg4;
- (void)realignStreams;

@end
