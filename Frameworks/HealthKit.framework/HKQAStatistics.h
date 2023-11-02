
@interface HKQAStatistics : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _sampleCount;
    NSDictionary * _sampleCountByType;
}

@property (nonatomic, readonly) NSNumber *sampleCount;
@property (nonatomic, readonly) NSDictionary *sampleCountByType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSampleCount:(id)arg1 sampleCountByType:(id)arg2;
- (id)sampleCount;
- (id)sampleCountByType;

@end
