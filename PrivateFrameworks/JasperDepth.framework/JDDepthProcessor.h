
@interface JDDepthProcessor : NSObject {
    struct JasperAlgo { 
        struct unique_ptr<JasperAlgo::Impl, std::default_delete<JasperAlgo::Impl>> { 
            struct __compressed_pair<JasperAlgo::Impl *, std::default_delete<JasperAlgo::Impl>> { 
                struct Impl {} *__value_; 
            } __ptr_; 
        } _impl; 
    }  _algo;
    struct BridgeProvider { int (**x1)(); id x2; int x3; } * _bridgeProvider;
    JDCameraCalibrationData * _cameraCalib;
    struct __CVDataBufferPool { } * _dataBufferPool;
    JDJasperModuleCalibrationData * _moduleCalib;
    bool  _outputAdditionalEchos;
    bool  _producePointCloudsWithCalibration;
}

@property bool outputAdditionalEchos;
@property bool producePointCloudsWithCalibration;
@property (readonly) unsigned long long requiredStorageBytesForGeneratedPointClouds;

+ (struct JDFrameConfigOverrides { float x1; })defaultFrameConfigOverrides;
+ (int)resolvePreset:(int)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)generateFrameConfigsForPreset:(int)arg1 overrides:(struct FrameConfigOverrides { float x1; double x2; bool x3; bool x4; bool x5; int x6; int x7; }*)arg2;
- (id)generateFrameConfigsForPreset:(int)arg1 withOptions:(id)arg2;
- (id)generateFrameConfigsForPreset:(int)arg1 withOverrides:(struct JDFrameConfigOverrides { float x1; }*)arg2;
- (id)generatePointCloudFromRawFrame:(id)arg1;
- (id)generatePointCloudFromRawFrame:(id)arg1 usingDataBuffer:(struct __CVBuffer { }*)arg2;
- (id)getInternalState;
- (id)initWithSystemCalibrationData:(id)arg1;
- (bool)outputAdditionalEchos;
- (bool)prepareDataPool;
- (bool)prepareForJasperPreset:(int)arg1;
- (bool)producePointCloudsWithCalibration;
- (bool)reportSessionStatistics;
- (unsigned long long)requiredStorageBytesForGeneratedPointClouds;
- (bool)setDataBufferPool:(struct __CVDataBufferPool { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGmoDebugMode;
- (void)setGmoFlowBitmap:(unsigned int)arg1;
- (void)setGmoProvider:(id)arg1;
- (void)setInternalState:(id)arg1;
- (void)setOutputAdditionalEchos:(bool)arg1;
- (void)setProducePointCloudsWithCalibration:(bool)arg1;
- (void)startNewStatisticsSession;

@end
