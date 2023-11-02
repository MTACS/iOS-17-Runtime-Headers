
@interface WFLinkSnippetDialogRequest : WFDialogRequest <NSSecureCoding> {
    LNViewSnippet * _viewSnippet;
}

@property (nonatomic, readonly, copy) LNViewSnippet *viewSnippet;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewSnippet:(id)arg1 attribution:(id)arg2;
- (id)viewSnippet;

@end
