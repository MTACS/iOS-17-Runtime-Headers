
@interface RPBroadcastConfiguration : NSObject <NSCoding, NSSecureCoding> {
    double  _clipDuration;
    NSDictionary * _videoCompressionProperties;
}

@property (nonatomic) double clipDuration;
@property (nonatomic, retain) NSDictionary *videoCompressionProperties;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)clipDuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setClipDuration:(double)arg1;
- (void)setVideoCompressionProperties:(id)arg1;
- (id)videoCompressionProperties;

@end
