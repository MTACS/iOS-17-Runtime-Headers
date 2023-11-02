
@interface ARDepthData : NSObject <ARResultData, NSSecureCoding> {
    ADCameraCalibration * _adCameraCalibration;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _cameraIntrinsics;
    struct __CVBuffer { } * _confidenceBuffer;
    struct __CVBuffer { } * _confidenceMap;
    struct __CVBuffer { } * _depthMap;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _deviceTransform;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _extrinsicsToAppNode;
    bool  _isValid;
    struct __CVBuffer { } * _normalsBuffer;
    double  _timestamp;
}

@property (nonatomic, retain) ADCameraCalibration *adCameraCalibration;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } cameraIntrinsics;
@property (nonatomic) struct __CVBuffer { }*confidenceBuffer;
@property (nonatomic) struct __CVBuffer { }*confidenceMap;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct __CVBuffer { }*depthMap;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } deviceTransform;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } extrinsicsToAppNode;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isValid;
@property (nonatomic) struct __CVBuffer { }*normalsBuffer;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

// Image: /System/Library/PrivateFrameworks/ARKitFoundation.framework/ARKitFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adCameraCalibration;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })cameraIntrinsics;
- (struct __CVBuffer { }*)confidenceBuffer;
- (struct __CVBuffer { }*)confidenceMap;
- (void)dealloc;
- (struct __CVBuffer { }*)depthMap;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })deviceTransform;
- (void)encodeWithCoder:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })extrinsicsToAppNode;
- (id)initWithCoder:(id)arg1;
- (id)initWithDepthMap:(struct __CVBuffer { }*)arg1 confidenceMap:(struct __CVBuffer { }*)arg2;
- (bool)isValid;
- (struct __CVBuffer { }*)normalsBuffer;
- (void)setAdCameraCalibration:(id)arg1;
- (void)setCameraIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setConfidenceBuffer:(struct __CVBuffer { }*)arg1;
- (void)setConfidenceMap:(struct __CVBuffer { }*)arg1;
- (void)setDepthMap:(struct __CVBuffer { }*)arg1;
- (void)setDeviceTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setExtrinsicsToAppNode:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setIsValid:(bool)arg1;
- (void)setNormalsBuffer:(struct __CVBuffer { }*)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

// Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore

- (id)tracingEntry;

@end
