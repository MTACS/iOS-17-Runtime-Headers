
@interface SLFetchShareableContentMetadataActionResponse : SLShareableContentActionResponse {
    SLShareableContentInitiatorRequest * _initiatorRequest;
    SLShareableContentMetadata * _metadata;
}

@property (nonatomic, retain) SLShareableContentInitiatorRequest *initiatorRequest;
@property (nonatomic, retain) SLShareableContentMetadata *metadata;

+ (id)responseWithMetadata:(id)arg1 initiatorRequest:(id)arg2;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initiatorRequest;
- (id)metadata;
- (void)setInitiatorRequest:(id)arg1;
- (void)setMetadata:(id)arg1;

@end
