
@protocol RPNearFieldXPCClientInterface

@required

- (void)didBeginTransaction:(id <RPNearFieldTransaction>)arg1;
- (void)didDetectDeviceNearbyWithInitiatorRole:(bool)arg1;
- (void)didInterruptTransaction:(id <RPNearFieldTransaction>)arg1 withError:(NSError *)arg2;
- (void)didUpdateTransaction:(id <RPNearFieldTransaction>)arg1;

@end
