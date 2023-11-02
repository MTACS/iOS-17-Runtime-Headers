
@interface WFContentAttribution : NSObject <NSSecureCoding, WFSerializableContent> {
    unsigned long long  _count;
    unsigned long long  _disclosureLevel;
    NSOrderedSet * _disclosureWarnings;
    WFContentLocation * _origin;
    NSOrderedSet * _privateItemIdentifiers;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long disclosureLevel;
@property (nonatomic, readonly) NSOrderedSet *disclosureWarnings;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFContentLocation *origin;
@property (nonatomic, retain) NSOrderedSet *privateItemIdentifiers;
@property (readonly) Class superclass;

+ (id)attributionWithAppDescriptor:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3 managedLevel:(unsigned long long)arg4;
+ (id)attributionWithAppDescriptor:(id)arg1 disclosureLevel:(unsigned long long)arg2;
+ (id)attributionWithDisclosureLevel:(unsigned long long)arg1 origin:(id)arg2 disclosureWarnings:(id)arg3 originalItemIdentifier:(id)arg4;
+ (id)attributionWithDisclosureLevel:(unsigned long long)arg1 origin:(id)arg2 disclosureWarnings:(id)arg3 originalItemIdentifiers:(id)arg4;
+ (id)attributionWithDisclosureLevel:(unsigned long long)arg1 origin:(id)arg2 disclosureWarnings:(id)arg3 originalItemIdentifiers:(id)arg4 count:(unsigned long long)arg5;
+ (id)attributionWithDisclosureLevel:(unsigned long long)arg1 origin:(id)arg2 originalItemIdentifier:(id)arg3;
+ (id)attributionWithDisclosureLevel:(unsigned long long)arg1 origin:(id)arg2 originalItemIdentifiers:(id)arg3;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)shortcutsAppAttribution;
+ (id)shortcutsAppAttributionWithDisclosureLevel:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributionByReplacingAccountWithAppOrigin;
- (id)attributionByUpdatingItemsCount:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)description;
- (unsigned long long)disclosureLevel;
- (id)disclosureWarnings;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisclosureLevel:(unsigned long long)arg1 origin:(id)arg2 disclosureWarnings:(id)arg3 originalItemIdentifiers:(id)arg4 count:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (id)origin;
- (id)privateItemIdentifiers;
- (void)setPrivateItemIdentifiers:(id)arg1;
- (id)wfSerializedRepresentation;
- (id)wfSerializedRepresentationWithPrivateItemIdentifiers;

@end
