
@interface BWMultiCamConfiguration : NSObject {
    NSArray * _portTypesPrioritizedForCameraControls;
    NSArray * _synchronizedActiveStreamsGroupsPortTypes;
    NSArray * _unsynchronizedActiveStreamsPortTypes;
}

+ (id)configurationWithCurrentStateFromCaptureDevice:(id)arg1;
+ (id)configurationWithUnsynchronizedActiveStreamsPortTypes:(id)arg1 synchronizedActiveStreamsGroupsPortTypes:(id)arg2;
+ (void)initialize;

- (id)copyActiveSynchronizedStreamsGroupsForDevice:(id)arg1 errorOut:(int*)arg2;
- (void)dealloc;
- (bool)isEqual:(id)arg1;
- (id)multiCamConfigurationForDevice:(id)arg1 errorOut:(int*)arg2;

@end
