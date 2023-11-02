
@interface MSOpenMailComposeViewControllerContext : NSObject <NSSecureCoding> {
    NSArray * _attachments;
    NSString * _autosaveIdentifier;
    NSDictionary * _compositionValues;
    NSString * _hostApplicationBundleIdentifier;
}

@property (nonatomic, retain) NSArray *attachments;
@property (nonatomic, readonly) NSString *autosaveIdentifier;
@property (nonatomic, retain) NSDictionary *compositionValues;
@property (nonatomic, retain) NSString *hostApplicationBundleIdentifier;

+ (bool)supportsSecureCoding;
+ (id)unarchiveFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)attachments;
- (id)autosaveIdentifier;
- (id)compositionValues;
- (void)encodeWithCoder:(id)arg1;
- (id)hostApplicationBundleIdentifier;
- (id)initWithAutosaveIdentifier:(id)arg1 compositionValues:(id)arg2 attachments:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setCompositionValues:(id)arg1;
- (void)setHostApplicationBundleIdentifier:(id)arg1;

@end
