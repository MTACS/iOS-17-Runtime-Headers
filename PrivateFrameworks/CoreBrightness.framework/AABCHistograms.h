
@interface AABCHistograms : NSObject {
    CBHistogramBuilder * _E;
    CBHistogramBuilder * _L;
    CBHistogramBuilder * _LDevice;
    CBHistogramBuilder * _LDeviceOff;
    CBHistogramBuilder * _LLPM;
    CBHistogramBuilder * _LOff;
}

@property (readonly) CBHistogramBuilder *E;
@property (readonly) CBHistogramBuilder *L;
@property (readonly) CBHistogramBuilder *LDevice;
@property (readonly) CBHistogramBuilder *LDeviceOff;
@property (readonly) CBHistogramBuilder *LLPM;
@property (readonly) CBHistogramBuilder *LOff;

- (id)E;
- (id)L;
- (id)LDevice;
- (id)LDeviceOff;
- (id)LLPM;
- (id)LOff;
- (void)dealloc;
- (id)init;
- (void)submit;

@end
