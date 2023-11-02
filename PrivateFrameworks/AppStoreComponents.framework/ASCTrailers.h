
@interface ASCTrailers : NSObject <NSCopying, NSSecureCoding> {
    ASCMediaPlatform * _mediaPlatform;
    NSArray * _videos;
}

@property (nonatomic, readonly, copy) ASCMediaPlatform *mediaPlatform;
@property (nonatomic, readonly, copy) NSArray *videos;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideos:(id)arg1 mediaPlatform:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mediaPlatform;
- (id)videos;

@end
