
@interface IDSPseudonymRequestProperties : NSObject <NSCopying, NSSecureCoding> {
    double  _requestTimeoutInterval;
}

@property (nonatomic) double requestTimeoutInterval;

+ (id)defaultProperties;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)requestTimeoutInterval;
- (void)setRequestTimeoutInterval:(double)arg1;

@end
