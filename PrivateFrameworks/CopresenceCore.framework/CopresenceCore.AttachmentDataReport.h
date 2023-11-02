
@interface CopresenceCore.AttachmentDataReport : NSObject <NSSecureCoding> {
    void assetTotalSize;
    void isServerBlocked;
    void isUpload;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
