
@interface WFAQIScaleGradient : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _stops;
}

@property (nonatomic, readonly) NSArray *stops;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStops:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToScaleGradient:(id)arg1;
- (id)stops;

@end
