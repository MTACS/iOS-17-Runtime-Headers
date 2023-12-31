
@interface AVMetadataMachineReadableCodeObject : AVMetadataObject {
    AVMetadataMachineReadableCodeObjectInternal * _internal;
}

@property (readonly) NSArray *corners;
@property (readonly) CIBarcodeDescriptor *descriptor;
@property (readonly) NSString *stringValue;

// Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture

+ (id)machineReadableCodeObjectWithAppClipCodeDictionary:(id)arg1 input:(id)arg2;
+ (id)machineReadableCodeObjectWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2;

- (id)basicDescriptor;
- (id)corners;
- (void)dealloc;
- (id)description;
- (id)descriptor;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 isVideoMirrored:(bool)arg3 rollAdjustment:(double)arg4;
- (id)initWithAppClipCodeDictionary:(id)arg1 input:(id)arg2;
- (id)initWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2;
- (id)stringValue;

// Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport

- (bool)_bcs_probablyContainsSameCodeInBasicDescriptor:(id)arg1;

@end
