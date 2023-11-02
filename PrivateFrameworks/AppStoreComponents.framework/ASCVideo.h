
@interface ASCVideo : NSObject <NSCopying, NSSecureCoding> {
    ASCArtwork * _preview;
    NSString * _videoURL;
}

@property (nonatomic, readonly, copy) ASCArtwork *preview;
@property (nonatomic, readonly, copy) NSString *videoURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoURL:(id)arg1 preview:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)preview;
- (id)videoURL;

@end
