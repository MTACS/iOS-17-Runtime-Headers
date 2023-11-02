
@protocol AVTDeviceResourceConsumerDelegate <NSObject>

@required

- (void)consumer:(id <AVTDeviceResourceConsumer>)arg1 willConsumeRenderingResourceForEstimatedDuration:(double)arg2;

@end
