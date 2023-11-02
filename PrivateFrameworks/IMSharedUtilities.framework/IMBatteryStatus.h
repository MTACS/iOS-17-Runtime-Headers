
@interface IMBatteryStatus : NSObject {
    <IMBatteryStatusTestDelegate> * _testDelegate;
}

@property (getter=isCharging, readonly) bool charging;
@property (nonatomic) <IMBatteryStatusTestDelegate> *testDelegate;

- (void).cxx_destruct;
- (bool)isCharging;
- (void)setTestDelegate:(id)arg1;
- (id)testDelegate;

@end
