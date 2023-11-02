
@interface SLCollaborationHighlight : SLHighlight {
    NSString * _collaborationIdentifier;
    NSString * _contentType;
    NSDate * _creationDate;
    NSDictionary * _earliestAttributionIdentifiers;
    NSString * _fileName;
    NSString * _fileProviderID;
    NSDictionary * _handleToIdentityMap;
    SWPersonIdentity * _localIdentity;
    _SWPersonIdentityProof * _localProofOfInclusion;
}

@property (nonatomic, readonly, copy) NSString *collaborationIdentifier;
@property (nonatomic, readonly, copy) NSString *contentType;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly) NSDictionary *earliestAttributionIdentifiers;
@property (nonatomic, readonly, copy) NSString *fileName;
@property (nonatomic, readonly) NSString *fileProviderID;
@property (nonatomic, readonly, copy) NSDictionary *handleToIdentityMap;
@property (nonatomic, readonly, copy) SWPersonIdentity *localIdentity;
@property (nonatomic, readonly, copy) _SWPersonIdentityProof *localProofOfInclusion;

+ (id)errorForCollaborationHighlightDomain:(id)arg1 andCode:(long long)arg2 andUnderlyingError:(id*)arg3;
+ (id)requiredSpotlightAttributeKeysforHighlightType:(unsigned char)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collaborationIdentifier;
- (id)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (id)dictionaryRepresentation;
- (id)earliestAttributionIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)fileName;
- (id)fileProviderID;
- (id)handleToIdentityMap;
- (unsigned long long)hash;
- (id)initWithAttribution:(id)arg1;
- (id)initWithCSSearchableItem:(id)arg1 error:(id*)arg2;
- (id)initWithCSSearchableItemUniqueIdentifier:(id)arg1 forContentType:(unsigned char)arg2 error:(id*)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPortraitCollaborationHighlight:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)localIdentity;
- (id)localProofOfInclusion;

@end
