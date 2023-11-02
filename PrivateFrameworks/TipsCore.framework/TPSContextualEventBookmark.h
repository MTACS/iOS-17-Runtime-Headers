
@interface TPSContextualEventBookmark : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _dataVersion;
}

@property (nonatomic) unsigned int dataVersion;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataVersion:(unsigned int)arg1;
- (void)setDataVersion:(unsigned int)arg1;

@end
