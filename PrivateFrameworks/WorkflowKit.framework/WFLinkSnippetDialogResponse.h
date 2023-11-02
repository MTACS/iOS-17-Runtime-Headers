
@interface WFLinkSnippetDialogResponse : WFDialogResponse {
    NSURL * _requestedOpenURL;
    unsigned long long  _snippetResponseCode;
}

@property (nonatomic, copy) NSURL *requestedOpenURL;
@property (nonatomic, readonly) unsigned long long snippetResponseCode;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCancelled:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestedOpenURL:(id)arg1;
- (id)initWithResponseCode:(long long)arg1;
- (id)requestedOpenURL;
- (void)setRequestedOpenURL:(id)arg1;
- (unsigned long long)snippetResponseCode;

@end
