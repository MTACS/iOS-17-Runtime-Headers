
@interface QLImageItemDataContents : QLImageItemContents <NSSecureCoding> {
    NSData * _imageData;
}

@property (nonatomic, retain) NSData *imageData;

+ (id)imageItemContentsWithImage:(id)arg1 imageData:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (void)setImageData:(id)arg1;

@end
