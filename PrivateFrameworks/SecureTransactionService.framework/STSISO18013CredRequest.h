
@interface STSISO18013CredRequest : STSCredentialRequest <NSSecureCoding> {
    NSData * _authACL;
    ISO18013TerminalAuthInfo * _readerAuthInfo;
    NSDictionary * _requestByNamespace;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
