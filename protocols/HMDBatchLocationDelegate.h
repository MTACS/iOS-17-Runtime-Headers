
@protocol HMDBatchLocationDelegate <HMDLocationDelegate>

@required

- (void)didDetermineBatchLocation:(CLLocation *)arg1;
- (void)getReachableIPAccessory:(unsigned long long*)arg1 btleAccessory:(unsigned long long*)arg2 mediaAccessory:(unsigned long long*)arg3;

@end
