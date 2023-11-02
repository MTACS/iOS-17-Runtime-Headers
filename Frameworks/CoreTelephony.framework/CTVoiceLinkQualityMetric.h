
@interface CTVoiceLinkQualityMetric : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _linkQuality;
}

@property (nonatomic, retain) NSNumber *linkQuality;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLinkQuality:(id)arg1;
- (id)linkQuality;
- (void)setLinkQuality:(id)arg1;

@end
