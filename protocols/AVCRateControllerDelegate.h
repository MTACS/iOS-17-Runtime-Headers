
@protocol AVCRateControllerDelegate <NSObject>

@required

- (void)rateController:(AVCRateController *)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;

@optional

- (int)learntBitrateForSegment:(NSString *)arg1 defaultValue:(int)arg2;
- (void)rateController:(AVCRateController *)arg1 isECNEnabled:(bool)arg2;

@end
