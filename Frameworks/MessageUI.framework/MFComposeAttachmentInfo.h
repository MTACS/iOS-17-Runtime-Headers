
@interface MFComposeAttachmentInfo : MSAttachmentInfo {
    NSString * _className;
    bool  _isBasicImage;
    bool  _isDisplayableImage;
}

@property (nonatomic, readonly, copy) NSString *className;
@property (nonatomic, readonly) bool isBasicImage;
@property (nonatomic, readonly) bool isDisplayableImage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)className;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 filename:(id)arg2 isBasicImage:(bool)arg3 isDisplayableImage:(bool)arg4 className:(id)arg5;
- (bool)isBasicImage;
- (bool)isDisplayableImage;

@end
