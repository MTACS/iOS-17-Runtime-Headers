
@interface AVTSCNNodeModifications : NSObject <NSSecureCoding> {
    double  _fieldOfView;
    NSString * _framingMode;
    long long  _projectionDirection;
    float  _verticalLensShift;
}

@property (nonatomic) double fieldOfView;
@property (nonatomic, retain) NSString *framingMode;
@property (nonatomic) long long projectionDirection;
@property (nonatomic) float verticalLensShift;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (double)fieldOfView;
- (id)framingMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithProjectionDirection:(double)arg1 fieldOfView:(double)arg2 verticalLensShift:(float)arg3 framingMode:(id)arg4;
- (long long)projectionDirection;
- (void)setFieldOfView:(double)arg1;
- (void)setFramingMode:(id)arg1;
- (void)setProjectionDirection:(long long)arg1;
- (void)setVerticalLensShift:(float)arg1;
- (float)verticalLensShift;

@end
