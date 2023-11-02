
@interface AVCScreenCaptureTestDelegate : NSObject <AVCScreenCaptureDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)screenCapture:(id)arg1 didStart:(bool)arg2 withError:(id)arg3;
- (void)screenCapture:(id)arg1 didStop:(bool)arg2 withError:(id)arg3;
- (void)serverDidDisconnect:(id)arg1;

@end
