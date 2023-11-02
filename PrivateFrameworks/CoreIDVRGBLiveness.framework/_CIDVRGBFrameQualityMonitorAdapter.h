
@interface _CIDVRGBFrameQualityMonitorAdapter : NSObject <PADFrameQualityMonitor> {
    <CIDVRGBCaptureImageQualityDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithCaptureDelegate:(id)arg1;
- (void)verifyQualityForFrame:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;

@end
