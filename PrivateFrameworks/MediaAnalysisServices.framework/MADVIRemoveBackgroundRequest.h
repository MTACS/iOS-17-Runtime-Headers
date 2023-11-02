
@interface MADVIRemoveBackgroundRequest : MADRequest {
    bool  _cropToFit;
    NSNumber * _imageType;
    bool  _performInPlace;
    bool  _returnMask;
}

@property (nonatomic) bool cropToFit;
@property (nonatomic, copy) NSNumber *imageType;
@property (nonatomic) bool performInPlace;
@property (nonatomic) bool returnMask;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)cropToFit;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)imageType;
- (id)initWithCoder:(id)arg1;
- (bool)performInPlace;
- (bool)returnMask;
- (void)setCropToFit:(bool)arg1;
- (void)setImageType:(id)arg1;
- (void)setPerformInPlace:(bool)arg1;
- (void)setReturnMask:(bool)arg1;

@end
