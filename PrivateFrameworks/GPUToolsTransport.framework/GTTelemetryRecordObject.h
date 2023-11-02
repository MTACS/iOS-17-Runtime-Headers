
@interface GTTelemetryRecordObject : NSObject <NSSecureCoding> {
    float  _average;
    float  _max;
    float  _min;
}

@property (nonatomic) float average;
@property (nonatomic) float max;
@property (nonatomic) float min;

+ (bool)supportsSecureCoding;

- (float)average;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (float)max;
- (float)min;
- (void)setAverage:(float)arg1;
- (void)setMax:(float)arg1;
- (void)setMin:(float)arg1;

@end
