
@interface QLImageItemContents : NSObject <NSSecureCoding> {
    UIImage * _image;
}

@property (nonatomic, copy) UIImage *image;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;
- (void)setImage:(id)arg1;

@end
