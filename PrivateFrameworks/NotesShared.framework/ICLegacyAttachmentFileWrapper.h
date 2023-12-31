
@interface ICLegacyAttachmentFileWrapper : NSFileWrapper <NSSecureCoding> {
    NSURL * _cidURL;
}

@property (nonatomic, readonly) NSString *attachmentIdentifier;
@property (nonatomic, retain) NSURL *cidURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachmentIdentifier;
- (id)cidURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCIDURL:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCidURL:(id)arg1;

@end
