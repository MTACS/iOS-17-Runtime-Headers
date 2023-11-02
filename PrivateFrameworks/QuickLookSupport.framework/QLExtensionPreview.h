
@interface QLExtensionPreview : NSObject <NSSecureCoding> {
    NSString * _previewDescription;
}

@property (copy) NSString *previewDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescription:(id)arg1;
- (id)previewDescription;
- (void)setPreviewDescription:(id)arg1;

@end
