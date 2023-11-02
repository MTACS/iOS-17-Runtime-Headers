
@protocol CLHidManagerDelegate <NSObject>

@optional

- (void)inputReportForDevice:(CLHidDevice *)arg1 report:(char *)arg2 length:(long long)arg3;
- (void)monitorUpdateForDevice:(CLHidDevice *)arg1 added:(bool)arg2;

@end
