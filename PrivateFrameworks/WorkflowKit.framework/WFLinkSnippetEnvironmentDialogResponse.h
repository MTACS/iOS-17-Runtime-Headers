
@interface WFLinkSnippetEnvironmentDialogResponse : WFDialogResponse {
    LNSnippetEnvironment * _environment;
}

@property (nonatomic, readonly, copy) LNSnippetEnvironment *environment;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)environment;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCancelled:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnvironment:(id)arg1;

@end
