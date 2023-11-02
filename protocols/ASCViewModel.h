
@protocol ASCViewModel <NSObject, NSCopying, NSSecureCoding>

@required

- (ASCAdamID *)id;
- (ASCViewMetrics *)metrics;

@end
