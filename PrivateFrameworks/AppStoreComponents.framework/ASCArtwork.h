
@interface ASCArtwork : NSObject <NSCopying, NSSecureCoding> {
    id  _dataSource;
    NSString * _decoration;
    double  _height;
    NSString * _preferredCrop;
    NSString * _preferredFormat;
    double  _width;
}

@property (nonatomic, readonly, copy) NSString *URLTemplate;
@property (nonatomic, readonly) id dataSource;
@property (nonatomic, readonly, copy) NSString *decoration;
@property (nonatomic, readonly) UIImage *embeddedImage;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly, copy) NSString *preferredCrop;
@property (nonatomic, readonly, copy) NSString *preferredFormat;
@property (nonatomic, readonly) double width;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URLTemplate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSource;
- (id)decoration;
- (id)description;
- (id)embeddedImage;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (double)height;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 decoration:(id)arg2;
- (id)initWithURLTemplate:(id)arg1 width:(double)arg2 height:(double)arg3 decoration:(id)arg4 preferredCrop:(id)arg5 preferredFormat:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)makeURLWithSubstitutions:(id)arg1;
- (id)preferredCrop;
- (id)preferredFormat;
- (double)width;

@end
