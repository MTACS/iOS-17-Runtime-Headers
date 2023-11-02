
@interface Feedback.FBKFeedbackForm : NSObject <NSSecureCoding> {
    void answers;
    void appToken;
    void attachmentDescriptors;
    void attachments;
    void authenticationMethod;
    void environment;
    void formId;
    void host;
    void identifier;
    void localizedAttachmentLegalText;
    void plugFormIds;
    void sandboxExtensionAttachments;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
