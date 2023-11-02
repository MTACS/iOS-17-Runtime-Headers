
@interface PKSharingMessageExtensionRelayServerMessage : PKSharingMessageExtensionCommonMessage <PKSharingMessageExtensionMessage> {
    PKProtobufRelaySharingMessage * _message;
    NSURL * _overrideURL;
    bool  _useLegacyMessageFormat;
}

@property (nonatomic, retain) NSString *carKeyReaderIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFromMe;
@property (nonatomic) bool isPending;
@property (nonatomic, retain) PKSharingMessageExtensionRelayServerLocalProperties *localProperties;
@property (nonatomic) NSURL *overrideURL;
@property (nonatomic, readonly) NSURL *phoneMailboxURL;
@property (nonatomic, retain) NSString *provisioningCredentialHash;
@property (nonatomic) unsigned long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *watchMailboxURL;

- (void).cxx_destruct;
- (id)_initWithCommonMessage:(id)arg1 url:(id)arg2;
- (id)_messageDataURLWithData:(id)arg1;
- (id)_messageDataWithDataURL:(id)arg1;
- (id)carKeyReaderIdentifier;
- (id)description;
- (id)init;
- (id)localProperties;
- (id)overrideURL;
- (id)phoneMailboxURL;
- (id)provisioningCredentialHash;
- (void)setCarKeyReaderIdentifier:(id)arg1;
- (void)setLocalProperties:(id)arg1;
- (void)setMailboxURLS:(id)arg1;
- (void)setOverrideURL:(id)arg1;
- (void)setProvisioningCredentialHash:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;
- (id)urlRepresentation;
- (id)watchMailboxURL;

@end
