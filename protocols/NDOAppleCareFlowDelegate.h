
@protocol NDOAppleCareFlowDelegate <NSObject>

@required

- (void)outreachFinishedForDeviceWithSerialNumber:(NSString *)arg1 withCompletion:(unsigned long long)arg2;

@optional

- (void)outreachFinishedWithCompletion:(unsigned long long)arg1;

@end
