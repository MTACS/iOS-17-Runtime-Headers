
@interface CTEnhancedLinkQualityMetric : NSObject <NSCopying, NSSecureCoding> {
    NSData * _enhancedLinkQuality;
}

@property (nonatomic, retain) NSData *enhancedLinkQuality;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)enhancedLinkQuality;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnhancedLinkQuality:(id)arg1;
- (void)setEnhancedLinkQuality:(id)arg1;

@end
