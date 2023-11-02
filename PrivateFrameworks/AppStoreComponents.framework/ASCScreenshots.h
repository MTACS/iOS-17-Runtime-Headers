
@interface ASCScreenshots : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _artwork;
    ASCMediaPlatform * _mediaPlatform;
}

@property (nonatomic, readonly, copy) NSArray *artwork;
@property (nonatomic, readonly, copy) ASCMediaPlatform *mediaPlatform;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artwork;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithArtwork:(id)arg1 mediaPlatform:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mediaPlatform;

@end
