
@interface CAMSystemPressureState : NSObject {
    AVCaptureSystemPressureState * __underlyingSystemPressureState;
}

@property (nonatomic, readonly) AVCaptureSystemPressureState *_underlyingSystemPressureState;
@property (nonatomic, readonly) bool hasCameraTemperatureFactor;

- (void).cxx_destruct;
- (id)_underlyingSystemPressureState;
- (id)description;
- (bool)hasCameraTemperatureFactor;
- (id)initWithCaptureSystemPressureState:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSystemPressureState:(id)arg1;

@end
