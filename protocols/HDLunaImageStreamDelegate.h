
@protocol HDLunaImageStreamDelegate <NSObject>

@required

- (void)handleImage:(HDLunaAppleCareImage *)arg1;
- (void)streamDidError:(NSError *)arg1;

@end
