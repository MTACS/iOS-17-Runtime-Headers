
@interface CDLabelProvider : NSObject <NSSecureCoding> {
    CLKImageProvider * _imageProvider;
    CLKTextProvider * _textProvider;
}

@property (nonatomic, readonly) CLKImageProvider *imageProvider;
@property (nonatomic, readonly) CLKTextProvider *textProvider;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)imageProvider;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextProvider:(id)arg1 imageProvider:(id)arg2;
- (id)textProvider;

@end
