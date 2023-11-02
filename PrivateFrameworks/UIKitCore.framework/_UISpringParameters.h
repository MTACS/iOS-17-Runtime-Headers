
@interface _UISpringParameters : NSObject <NSCopying, NSSecureCoding> {
    double  __dampingRatio;
    double  __response;
}

@property (nonatomic, readonly) double _dampingRatio;
@property (nonatomic, readonly) double _response;

+ (id)parametersWithDampingRatio:(double)arg1 response:(double)arg2;
+ (bool)supportsSecureCoding;

- (double)_dampingRatio;
- (double)_response;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDampingRatio:(double)arg1 response:(double)arg2;
- (bool)isEqual:(id)arg1;

@end
