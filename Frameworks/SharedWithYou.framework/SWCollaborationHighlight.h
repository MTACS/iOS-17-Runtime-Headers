
@interface SWCollaborationHighlight : SWHighlight <NSCopying, NSSecureCoding> {
    NSString * _collaborationIdentifier;
    unsigned char  _highlightType;
    SLCollaborationHighlight * _slCollaborationHighlight;
}

@property (nonatomic, copy) NSString *collaborationIdentifier;
@property (nonatomic, readonly, copy) UTType *contentType;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly) NSDictionary *earliestAttributionIdentifiers;
@property (nonatomic, readonly) NSString *fileProviderID;
@property (nonatomic, readonly, copy) NSDictionary *handleToIdentityMap;
@property (nonatomic, readonly) unsigned char highlightType;
@property (nonatomic, readonly, copy) SWPersonIdentity *localIdentity;
@property (nonatomic, readonly) SWPersonIdentityProof *localProofOfInclusion;
@property (nonatomic, readonly) SLCollaborationHighlight *slCollaborationHighlight;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) UTType *type;

+ (id)requiredSpotlightAttributeKeysforHighlightType:(unsigned char)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)attributions;
- (id)collaborationIdentifier;
- (id)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)earliestAttributionIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)fileProviderID;
- (id)handleToIdentityMap;
- (unsigned long long)hash;
- (unsigned char)highlightType;
- (id)initWithCSSearchableItem:(id)arg1 error:(id*)arg2;
- (id)initWithCSSearchableItemUniqueIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithCSSearchableItemUniqueIdentifier:(id)arg1 forType:(unsigned char)arg2 error:(id*)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSLCollaborationHighlight:(id)arg1;
- (id)initWithSLCollaborationHighlight:(id)arg1 andType:(unsigned char)arg2;
- (bool)isEqual:(id)arg1;
- (id)localIdentity;
- (id)localProofOfInclusion;
- (void)setCollaborationIdentifier:(id)arg1;
- (id)slCollaborationHighlight;
- (id)timestamp;
- (id)title;
- (id)type;

@end
