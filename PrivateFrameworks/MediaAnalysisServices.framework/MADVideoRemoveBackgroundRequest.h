
@interface MADVideoRemoveBackgroundRequest : MADVideoRequest {
    NSValue * _instancePoint;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maskTime;
    NSNumber * _maxDimension;
    NSNumber * _maxFileSize;
    NSNumber * _minDimension;
    UTType * _outputType;
    NSArray * _stickerIdentifiers;
}

@property (nonatomic, copy) NSValue *instancePoint;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } maskTime;
@property (nonatomic, copy) NSNumber *maxDimension;
@property (nonatomic, copy) NSNumber *maxFileSize;
@property (nonatomic, copy) NSNumber *minDimension;
@property (nonatomic, copy) UTType *outputType;
@property (nonatomic, readonly) MADVideoRemoveBackgroundResult *result;
@property (nonatomic, copy) NSArray *stickerIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)instancePoint;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maskTime;
- (id)maxDimension;
- (id)maxFileSize;
- (id)minDimension;
- (id)outputType;
- (id)result;
- (void)setInstancePoint:(id)arg1;
- (void)setMaskTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaxDimension:(id)arg1;
- (void)setMaxFileSize:(id)arg1;
- (void)setMinDimension:(id)arg1;
- (void)setOutputType:(id)arg1;
- (void)setStickerIdentifiers:(id)arg1;
- (id)stickerIdentifiers;

@end
