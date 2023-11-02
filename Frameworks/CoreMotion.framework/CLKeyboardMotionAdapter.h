
@interface CLKeyboardMotionAdapter : NSObject <CLHidEventManagerDelegate, CLHidManagerDelegate, SBSSmartCoverStateObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)eventUpdateForDevice:(id)arg1 event:(id)arg2;
- (void)inputReportForDevice:(id)arg1 report:(char *)arg2 length:(long long)arg3;
- (void)monitorUpdateForDevice:(id)arg1 added:(bool)arg2;
- (void)smartCoverStateDidChange:(long long)arg1;

@end
