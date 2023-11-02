
@interface CTStewieCompressionRequest : NSObject <NSCopying, NSSecureCoding> {
    NSData * _data;
}

@property (nonatomic, retain) NSData *data;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setData:(id)arg1;

@end
