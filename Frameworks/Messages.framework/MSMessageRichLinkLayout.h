
@interface MSMessageRichLinkLayout : MSMessageTemplateLayout <NSSecureCoding> {
    LPLinkMetadata * _linkMetadata;
}

@property (nonatomic, readonly) LPLinkMetadata *linkMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_sanitizedCopy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLinkMetadata:(id)arg1;
- (id)linkMetadata;
- (void)setCaption:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageSubtitle:(id)arg1;
- (void)setImageTitle:(id)arg1;
- (void)setMediaFileURL:(id)arg1;
- (void)setSubcaption:(id)arg1;
- (void)setTrailingCaption:(id)arg1;
- (void)setTrailingSubcaption:(id)arg1;

@end
