
@interface CKPluginDisplayContainer : NSObject <NSSecureCoding> {
    UIImage * _composeImage;
    IMPluginPayload * _pluginPayload;
}

@property (nonatomic, retain) UIImage *composeImage;
@property (nonatomic, retain) IMPluginPayload *pluginPayload;

+ (id)pluginDisplayContainerWithPluginPayload:(id)arg1 composeImage:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)unarchiveFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)composeImage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pasteboardItemProvider;
- (id)pluginPayload;
- (id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setComposeImage:(id)arg1;
- (void)setPluginPayload:(id)arg1;

@end
