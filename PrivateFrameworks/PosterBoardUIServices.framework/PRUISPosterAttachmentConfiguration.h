
@interface PRUISPosterAttachmentConfiguration : NSObject {
    UIWindowScene * _attachmentHostWindowScene;
    NSArray * _attachments;
}

@property (nonatomic, retain) UIWindowScene *attachmentHostWindowScene;
@property (nonatomic, copy) NSArray *attachments;

+ (id)attachmentConfigurationWithHostWindowScene:(id)arg1 attachments:(id)arg2;

- (void).cxx_destruct;
- (id)attachmentHostWindowScene;
- (id)attachments;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setAttachmentHostWindowScene:(id)arg1;
- (void)setAttachments:(id)arg1;

@end
