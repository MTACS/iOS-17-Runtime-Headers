
@interface BKSMutableTouchAuthenticationSpecification : BKSTouchAuthenticationSpecification

@property (nonatomic) unsigned long long authenticationMessageContext;
@property (nonatomic) float backgroundStatisticsFailingContrast;
@property (nonatomic) float backgroundStatisticsForeground;
@property (nonatomic) float backgroundStatisticsPassingContrast;
@property (nonatomic) struct { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } backgroundStatisticsRegion;
@property (nonatomic, copy) NSSet *displays;
@property (nonatomic) unsigned long long hitTestInformationMask;
@property (nonatomic) long long initialSampleEvent;
@property (nonatomic) unsigned int secureName;
@property (nonatomic) unsigned int slotID;

- (void)setAuthenticationMessageContext:(unsigned long long)arg1;
- (void)setBackgroundStatisticsFailingContrast:(float)arg1;
- (void)setBackgroundStatisticsForeground:(float)arg1;
- (void)setBackgroundStatisticsPassingContrast:(float)arg1;
- (void)setBackgroundStatisticsRegion:(struct { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; })arg1;
- (void)setDisplays:(id)arg1;
- (void)setHitTestInformationMask:(unsigned long long)arg1;
- (void)setInitialSampleEvent:(long long)arg1;
- (void)setSecureName:(unsigned int)arg1;
- (void)setSlotID:(unsigned int)arg1;

@end
