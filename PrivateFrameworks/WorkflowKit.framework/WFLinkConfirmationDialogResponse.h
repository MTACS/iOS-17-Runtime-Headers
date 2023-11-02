
@interface WFLinkConfirmationDialogResponse : WFLinkSnippetDialogResponse {
    unsigned long long  _requestResponseCode;
}

@property (nonatomic, readonly) unsigned long long requestResponseCode;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfirmationResponseCode:(unsigned long long)arg1;
- (id)initWithRequestedOpenURL:(id)arg1;
- (unsigned long long)requestResponseCode;
- (bool)shouldDismissDialogInTransientMode;

@end
