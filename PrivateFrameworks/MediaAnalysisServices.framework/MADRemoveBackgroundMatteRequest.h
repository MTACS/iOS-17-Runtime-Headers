
@interface MADRemoveBackgroundMatteRequest : MADRequest {
    bool  _cropResult;
    NSNumber * _imageType;
    bool  _inPlace;
    NSIndexSet * _instances;
}

@property (nonatomic) bool cropResult;
@property (nonatomic, copy) NSNumber *imageType;
@property (nonatomic) bool inPlace;
@property (nonatomic, copy) NSIndexSet *instances;
@property (nonatomic, readonly) MADRemoveBackgroundMatteResult *result;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)cropResult;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)imageType;
- (bool)inPlace;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)instances;
- (id)result;
- (void)setCropResult:(bool)arg1;
- (void)setImageType:(id)arg1;
- (void)setInPlace:(bool)arg1;
- (void)setInstances:(id)arg1;

@end
