
@interface SPSecureLocationsStewiePublishResult : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _lastPublished;
    double  _nextAllowedPublish;
}

@property (nonatomic, copy) NSDate *lastPublished;
@property (nonatomic) double nextAllowedPublish;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastPublished;
- (double)nextAllowedPublish;
- (void)setLastPublished:(id)arg1;
- (void)setNextAllowedPublish:(double)arg1;

@end
