
@interface HIDRemoteDevice : HIDUserDevice {
    unsigned long long  _deviceID;
    unsigned long long  _endpointID;
    unsigned int  _handleReportCount;
    unsigned int  _handleReportError;
    NSData * _lastGetReport;
    int  _lastSetReportStatus;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    unsigned char  _side;
    unsigned char  _transportVersion;
    bool  _waitForReport;
}

@property unsigned long long deviceID;
@property unsigned long long endpointID;
@property unsigned int handleReportCount;
@property unsigned int handleReportError;
@property (retain) NSData *lastGetReport;
@property int lastSetReportStatus;
@property (retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property unsigned char side;
@property unsigned char transportVersion;
@property bool waitForReport;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)deviceID;
- (unsigned long long)endpointID;
- (int)getReportHandler:(int)arg1 reportID:(unsigned char)arg2 report:(char *)arg3 reportLength:(unsigned long long)arg4;
- (unsigned int)handleReportCount;
- (unsigned int)handleReportError;
- (id)initWithProperties:(id)arg1;
- (id)lastGetReport;
- (int)lastSetReportStatus;
- (id)semaphore;
- (void)setDeviceID:(unsigned long long)arg1;
- (void)setEndpointID:(unsigned long long)arg1;
- (void)setHandleReportCount:(unsigned int)arg1;
- (void)setHandleReportError:(unsigned int)arg1;
- (void)setLastGetReport:(id)arg1;
- (void)setLastSetReportStatus:(int)arg1;
- (int)setReportHandler:(int)arg1 reportID:(unsigned char)arg2 status:(int)arg3;
- (void)setSemaphore:(id)arg1;
- (void)setSide:(unsigned char)arg1;
- (void)setTransportVersion:(unsigned char)arg1;
- (void)setWaitForReport:(bool)arg1;
- (unsigned char)side;
- (unsigned char)transportVersion;
- (bool)waitForReport;

@end
