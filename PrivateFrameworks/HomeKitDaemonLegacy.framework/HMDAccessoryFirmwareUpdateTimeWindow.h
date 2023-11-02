
@interface HMDAccessoryFirmwareUpdateTimeWindow : NSObject <HMFLogging> {
    NSDateComponents * _endTimeComponents;
    NSDateComponents * _startTimeComponents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDateComponents *endTimeComponents;
@property (readonly) unsigned long long hash;
@property (readonly) NSDateComponents *startTimeComponents;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)endTimeComponents;
- (id)initWithStartTime:(id)arg1 endTime:(id)arg2;
- (id)startTimeComponents;

@end
