
@interface PKApplicationMessageIcon : NSObject <NSSecureCoding> {
    PKImageDescriptor * _image;
    long long  _style;
}

@property (nonatomic, readonly) PKImageDescriptor *image;
@property (nonatomic, readonly) long long style;

+ (id)createWithImage:(id)arg1 style:(long long)arg2;
+ (struct CGSize { double x1; double x2; })maximumSizeForStyle:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)style;

@end
