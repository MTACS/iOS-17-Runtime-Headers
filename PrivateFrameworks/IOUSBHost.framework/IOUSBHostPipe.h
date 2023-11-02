
@interface IOUSBHostPipe : IOUSBHostIOSource {
    NSData * _currentDescriptorsCache;
    NSMutableSet * _invalidDescriptorCache;
    NSData * _originalDescriptorsCache;
    bool  _streamsEnabled;
}

@property (retain) NSData *currentDescriptorsCache;
@property (readonly) const struct IOUSBHostIOSourceDescriptors { unsigned short x1; struct IOUSBEndpointDescriptor { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; unsigned char x_2_1_4; unsigned short x_2_1_5; unsigned char x_2_1_6; } x2; struct IOUSBSuperSpeedEndpointCompanionDescriptor { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned short x_3_1_5; } x3; struct IOUSBSuperSpeedPlusIsochronousEndpointCompanionDescriptor { unsigned char x_4_1_1; unsigned char x_4_1_2; unsigned short x_4_1_3; unsigned int x_4_1_4; } x4; }*descriptors;
@property (readonly) double idleTimeout;
@property (retain) NSMutableSet *invalidDescriptorCache;
@property (readonly) const struct IOUSBHostIOSourceDescriptors { unsigned short x1; struct IOUSBEndpointDescriptor { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; unsigned char x_2_1_4; unsigned short x_2_1_5; unsigned char x_2_1_6; } x2; struct IOUSBSuperSpeedEndpointCompanionDescriptor { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned short x_3_1_5; } x3; struct IOUSBSuperSpeedPlusIsochronousEndpointCompanionDescriptor { unsigned char x_4_1_1; unsigned char x_4_1_2; unsigned short x_4_1_3; unsigned int x_4_1_4; } x4; }*originalDescriptors;
@property (retain) NSData *originalDescriptorsCache;
@property bool streamsEnabled;

- (void).cxx_destruct;
- (bool)abortWithError:(id*)arg1;
- (bool)abortWithOption:(unsigned long long)arg1 error:(id*)arg2;
- (bool)adjustPipeWithDescriptors:(const struct IOUSBHostIOSourceDescriptors { unsigned short x1; struct IOUSBEndpointDescriptor { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; unsigned char x_2_1_4; unsigned short x_2_1_5; unsigned char x_2_1_6; } x2; struct IOUSBSuperSpeedEndpointCompanionDescriptor { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned short x_3_1_5; } x3; struct IOUSBSuperSpeedPlusIsochronousEndpointCompanionDescriptor { unsigned char x_4_1_1; unsigned char x_4_1_2; unsigned short x_4_1_3; unsigned int x_4_1_4; } x4; }*)arg1 error:(id*)arg2;
- (bool)clearStallWithError:(id*)arg1;
- (id)copyStreamWithStreamID:(unsigned long long)arg1 error:(id*)arg2;
- (id)currentDescriptorsCache;
- (const struct IOUSBHostIOSourceDescriptors { unsigned short x1; struct IOUSBEndpointDescriptor { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; unsigned char x_2_1_4; unsigned short x_2_1_5; unsigned char x_2_1_6; } x2; struct IOUSBSuperSpeedEndpointCompanionDescriptor { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned short x_3_1_5; } x3; struct IOUSBSuperSpeedPlusIsochronousEndpointCompanionDescriptor { unsigned char x_4_1_1; unsigned char x_4_1_2; unsigned short x_4_1_3; unsigned int x_4_1_4; } x4; }*)descriptors;
- (bool)disableStreamsWithError:(id*)arg1;
- (bool)enableStreamsWithError:(id*)arg1;
- (bool)enqueueControlRequest:(struct IOUSBDeviceRequest { unsigned char x1; unsigned char x2; unsigned short x3; unsigned short x4; unsigned short x5; })arg1 data:(id)arg2 completionTimeout:(double)arg3 error:(id*)arg4 completionHandler:(id /* block */)arg5;
- (bool)enqueueControlRequest:(struct IOUSBDeviceRequest { unsigned char x1; unsigned char x2; unsigned short x3; unsigned short x4; unsigned short x5; })arg1 data:(id)arg2 error:(id*)arg3 completionHandler:(id /* block */)arg4;
- (bool)enqueueControlRequest:(struct IOUSBDeviceRequest { unsigned char x1; unsigned char x2; unsigned short x3; unsigned short x4; unsigned short x5; })arg1 error:(id*)arg2 completionHandler:(id /* block */)arg3;
- (bool)enqueueIORequestWithData:(id)arg1 completionTimeout:(double)arg2 error:(id*)arg3 completionHandler:(id /* block */)arg4;
- (bool)enqueueIORequestWithData:(id)arg1 frameList:(struct IOUSBHostIsochronousFrame { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; }*)arg2 frameListCount:(unsigned long long)arg3 firstFrameNumber:(unsigned long long)arg4 error:(id*)arg5 completionHandler:(id /* block */)arg6;
- (bool)enqueueIORequestWithData:(id)arg1 frameList:(struct IOUSBHostIsochronousFrame { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; }*)arg2 frameListCount:(unsigned long long)arg3 firstFrameNumber:(unsigned long long)arg4 options:(unsigned int)arg5 error:(id*)arg6 completionHandler:(id /* block */)arg7 version:(unsigned long long)arg8;
- (bool)enqueueIORequestWithData:(id)arg1 transactionList:(struct IOUSBHostIsochronousTransaction { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned int x6; }*)arg2 transactionListCount:(unsigned long long)arg3 firstFrameNumber:(unsigned long long)arg4 options:(unsigned int)arg5 error:(id*)arg6 completionHandler:(id /* block */)arg7;
- (double)idleTimeout;
- (id)initWithHostInterface:(id)arg1 endpointAddress:(unsigned long long)arg2 ioConnection:(unsigned int)arg3 ioNotificationPortRef:(struct IONotificationPort { }*)arg4 deviceAddress:(unsigned long long)arg5;
- (id)invalidDescriptorCache;
- (const struct IOUSBHostIOSourceDescriptors { unsigned short x1; struct IOUSBEndpointDescriptor { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; unsigned char x_2_1_4; unsigned short x_2_1_5; unsigned char x_2_1_6; } x2; struct IOUSBSuperSpeedEndpointCompanionDescriptor { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned short x_3_1_5; } x3; struct IOUSBSuperSpeedPlusIsochronousEndpointCompanionDescriptor { unsigned char x_4_1_1; unsigned char x_4_1_2; unsigned short x_4_1_3; unsigned int x_4_1_4; } x4; }*)ioSourceDescriptorsWithOption:(unsigned long long)arg1;
- (const struct IOUSBHostIOSourceDescriptors { unsigned short x1; struct IOUSBEndpointDescriptor { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; unsigned char x_2_1_4; unsigned short x_2_1_5; unsigned char x_2_1_6; } x2; struct IOUSBSuperSpeedEndpointCompanionDescriptor { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned short x_3_1_5; } x3; struct IOUSBSuperSpeedPlusIsochronousEndpointCompanionDescriptor { unsigned char x_4_1_1; unsigned char x_4_1_2; unsigned short x_4_1_3; unsigned int x_4_1_4; } x4; }*)originalDescriptors;
- (id)originalDescriptorsCache;
- (bool)sendControlRequest:(struct IOUSBDeviceRequest { unsigned char x1; unsigned char x2; unsigned short x3; unsigned short x4; unsigned short x5; })arg1 data:(id)arg2 bytesTransferred:(unsigned long long*)arg3 completionTimeout:(double)arg4 error:(id*)arg5;
- (bool)sendControlRequest:(struct IOUSBDeviceRequest { unsigned char x1; unsigned char x2; unsigned short x3; unsigned short x4; unsigned short x5; })arg1 data:(id)arg2 bytesTransferred:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)sendControlRequest:(struct IOUSBDeviceRequest { unsigned char x1; unsigned char x2; unsigned short x3; unsigned short x4; unsigned short x5; })arg1 error:(id*)arg2;
- (bool)sendIORequestWithData:(id)arg1 bytesTransferred:(unsigned long long*)arg2 completionTimeout:(double)arg3 error:(id*)arg4;
- (bool)sendIORequestWithData:(id)arg1 frameList:(struct IOUSBHostIsochronousFrame { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; }*)arg2 frameListCount:(unsigned long long)arg3 firstFrameNumber:(unsigned long long)arg4 error:(id*)arg5;
- (bool)sendIORequestWithData:(id)arg1 frameList:(void*)arg2 frameListCount:(unsigned long long)arg3 firstFrameNumber:(unsigned long long)arg4 options:(unsigned int)arg5 error:(id*)arg6 version:(unsigned long long)arg7;
- (bool)sendIORequestWithData:(id)arg1 transactionList:(struct IOUSBHostIsochronousTransaction { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned int x6; }*)arg2 transactionListCount:(unsigned long long)arg3 firstFrameNumber:(unsigned long long)arg4 options:(unsigned int)arg5 error:(id*)arg6;
- (void)setCurrentDescriptorsCache:(id)arg1;
- (bool)setIdleTimeout:(double)arg1 error:(id*)arg2;
- (void)setInvalidDescriptorCache:(id)arg1;
- (void)setOriginalDescriptorsCache:(id)arg1;
- (void)setStreamsEnabled:(bool)arg1;
- (bool)streamsEnabled;

@end
