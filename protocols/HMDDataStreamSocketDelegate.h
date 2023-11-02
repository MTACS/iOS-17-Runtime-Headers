
@protocol HMDDataStreamSocketDelegate <NSObject>

@required

- (void)socket:(id <HMDDataStreamSocket>)arg1 didFailWithError:(NSError *)arg2;
- (void)socketDidClose:(id <HMDDataStreamSocket>)arg1;
- (void)socketDidReceiveData:(id <HMDDataStreamSocket>)arg1;

@end
