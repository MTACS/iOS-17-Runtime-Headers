
@protocol NFFieldDetectSessionDelegate <NSObject>

@optional

- (void)fieldDetectSession:(NFFieldDetectSession *)arg1 didDetectField:(bool)arg2;
- (void)fieldDetectSession:(NFFieldDetectSession *)arg1 didDetectTechnology:(NFTechnologyEvent *)arg2;
- (void)fieldDetectSession:(NFFieldDetectSession *)arg1 didEnterFieldWithNotification:(NFFieldNotification *)arg2;
- (void)fieldDetectSessionDidEndUnexpectedly:(NFFieldDetectSession *)arg1;
- (void)fieldDetectSessionDidExitField:(NFFieldDetectSession *)arg1;

@end
