
@interface PCCEndpoint : NSObject {
    <OSASyncProxyHandler> * _delegate;
    NSArray * _deviceIds;
    unsigned int  _fileTimeout;
}

@property (readonly) NSArray *deviceIds;
@property unsigned int fileTimeout;

- (void).cxx_destruct;
- (id)deviceIds;
- (unsigned int)fileTimeout;
- (bool)isDeviceNearby:(id)arg1;
- (void)runWithDelegate:(id)arg1;
- (id)send:(id)arg1 file:(id)arg2 metadata:(id)arg3 error:(id*)arg4;
- (id)send:(id)arg1 message:(id)arg2 error:(id*)arg3;
- (void)setFileTimeout:(unsigned int)arg1;
- (id)synchronize:(id)arg1 withOptions:(id)arg2;

@end
