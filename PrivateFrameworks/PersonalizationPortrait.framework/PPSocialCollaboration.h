
@interface PPSocialCollaboration : PPSocialHighlight {
    NSString * _collaborationIdentifier;
    NSString * _contentDisplayName;
    NSString * _contentType;
    NSDate * _creationDate;
    NSDictionary * _earliestAttributionIdentifiers;
    NSString * _fileProviderId;
    NSData * _handleToIdentityMap;
    NSData * _localIdentity;
    NSData * _localIdentityProof;
    NSData * _proofOfInclusionHashes;
    NSData * _proofOfInclusionLocalKeyHash;
}

@property (nonatomic, readonly) NSString *collaborationIdentifier;
@property (nonatomic, readonly) NSString *contentDisplayName;
@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDictionary *earliestAttributionIdentifiers;
@property (nonatomic, readonly) NSString *fileProviderId;
@property (nonatomic, readonly) NSData *handleToIdentityMap;
@property (nonatomic, readonly) NSData *localIdentity;
@property (nonatomic, readonly) NSData *localIdentityProof;
@property (nonatomic, readonly) NSData *proofOfInclusionHashes;
@property (nonatomic, readonly) NSData *proofOfInclusionLocalKeyHash;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collaborationIdentifier;
- (id)contentDisplayName;
- (id)contentType;
- (id)creationDate;
- (id)description;
- (id)earliestAttributionIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)fileProviderId;
- (id)handleToIdentityMap;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 resourceURL:(id)arg2 timestamp:(id)arg3 attributionIdentifiers:(id)arg4 supplementaryData:(id)arg5 collaborationIdentifier:(id)arg6 contentDisplayName:(id)arg7 contentCreationDate:(id)arg8 contentUTIType:(id)arg9 fileProviderId:(id)arg10 earliestAttributionIdentifiers:(id)arg11 localIdentity:(id)arg12 localIdentityProof:(id)arg13 handleToIdentityMap:(id)arg14;
- (id)initWithIdentifier:(id)arg1 resourceURL:(id)arg2 timestamp:(id)arg3 attributionIdentifiers:(id)arg4 supplementaryData:(id)arg5 collaborationIdentifier:(id)arg6 contentDisplayName:(id)arg7 contentCreationDate:(id)arg8 contentUTIType:(id)arg9 fileProviderId:(id)arg10 earliestAttributionIdentifiers:(id)arg11 localIdentity:(id)arg12 localIdentityProof:(id)arg13 handleToIdentityMap:(id)arg14 score:(id)arg15;
- (id)localIdentity;
- (id)localIdentityProof;
- (id)proofOfInclusionHashes;
- (id)proofOfInclusionLocalKeyHash;

@end
