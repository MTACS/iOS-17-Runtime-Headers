
@protocol VCRedundancyControllerDelegate

@required

- (void)redundancyController:(id <VCRedundancyControllerProtocol>)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id <VCRedundancyControllerProtocol>)arg1 redundancyPercentageDidChange:(unsigned int)arg2;

@optional

- (void)redundancyController:(id <VCRedundancyControllerProtocol>)arg1 redundancyVectorDidChange:(struct { unsigned short x1; struct { unsigned char x_2_1_1; unsigned char x_2_1_2; } x2[32]; })arg2;

@end
