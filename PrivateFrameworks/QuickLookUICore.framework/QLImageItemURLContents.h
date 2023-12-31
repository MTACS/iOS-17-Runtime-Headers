
@interface QLImageItemURLContents : QLImageItemContents <NSSecureCoding> {
    NSURL * _imageURL;
}

@property (nonatomic, copy) NSURL *imageURL;

+ (id)imageItemContentsWithImage:(id)arg1 imageURL:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)imageURL;
- (id)initWithCoder:(id)arg1;
- (void)setImageURL:(id)arg1;

@end
