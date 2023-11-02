
@interface MADPersonIdentificationResult : MADResult {
    long long  _frontCameraCaptureState;
    NSArray * _resultItems;
}

@property (nonatomic, readonly) long long frontCameraCaptureState;
@property (nonatomic, readonly) NSArray *resultItems;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)frontCameraCaptureState;
- (id)initWithCoder:(id)arg1;
- (id)initWithResultItems:(id)arg1 frontCameraCaptureState:(long long)arg2;
- (id)resultItems;

@end
