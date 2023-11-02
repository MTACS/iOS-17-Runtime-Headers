
@interface PRUISDefaultSessionReconnectPolicy : NSObject <PRUISSessionReconnectPolicy> {
    double  _alpha;
    double  _intervalMovingAverage;
    NSDate * _lastDisconnect;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)sessionDidDisconnect;
- (double)sessionReconnectDelay;

@end
