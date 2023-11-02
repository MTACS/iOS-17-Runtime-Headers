
@interface NMSPodcastSizeInfo : NSObject <NSSecureCoding> {
    unsigned long long  _count;
    double  _totalDuration;
    unsigned long long  _totalSize;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) double totalDuration;
@property (nonatomic) unsigned long long totalSize;

+ (bool)supportsSecureCoding;

- (unsigned long long)averageSize;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setTotalDuration:(double)arg1;
- (void)setTotalSize:(unsigned long long)arg1;
- (double)sizeDurationRatio;
- (double)totalDuration;
- (unsigned long long)totalSize;

@end
