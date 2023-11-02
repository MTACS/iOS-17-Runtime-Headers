
@interface WFContentAttributionSet : NSObject <NSSecureCoding, WFSerializableContent> {
    NSArray * _attributions;
}

@property (nonatomic, readonly, copy) NSArray *attributions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long derivedDisclosureLevel;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *wfSerializedRepresentationWithPrivateItemIdentifiers;

+ (id)attributionSetByMergingAttributionSets:(id)arg1;
+ (id)attributionSetWithAccountBasedAppDescriptor:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3 originalItemIdentifier:(id)arg4;
+ (id)attributionSetWithAppDescriptor:(id)arg1 disclosureLevel:(unsigned long long)arg2;
+ (id)attributionSetWithAppDescriptor:(id)arg1 disclosureLevel:(unsigned long long)arg2 originalItemIdentifier:(id)arg3;
+ (id)attributionSetWithAttributions:(id)arg1;
+ (id)attributionSetWithAttributions:(id)arg1 shouldReduceAttributions:(bool)arg2;
+ (id)attributionSetWithOrigin:(id)arg1 disclosureLevel:(unsigned long long)arg2;
+ (id)attributionSetWithOrigin:(id)arg1 disclosureLevel:(unsigned long long)arg2 disclosureWarnings:(id)arg3 originalItemIdentifier:(id)arg4;
+ (id)attributionSetWithOrigin:(id)arg1 disclosureLevel:(unsigned long long)arg2 originalItemIdentifier:(id)arg3;
+ (id)combiningAttributions:(id)arg1 withAttributions:(id)arg2;
+ (id)compactAttributionsFrom:(id)arg1 disclosureLevel:(unsigned long long)arg2;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)reducedAttributionsFrom:(id)arg1;
+ (id)shortcutsAppAttributionSet;
+ (id)shortcutsAppAttributionSetWithDisclosureLevel:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allOrigins;
- (id)attributionSetByFilteringNeighborsOfContentItem:(id)arg1;
- (id)attributionSetByReplacingAccountWithAppOrigins;
- (id)attributions;
- (unsigned long long)derivedDisclosureLevel;
- (unsigned long long)derivedManagedLevel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttribution:(id)arg1;
- (id)initWithAttributions:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAllowedToBeSentToDestinationWithManagedLevel:(unsigned long long)arg1;
- (bool)isEligibleToShareWithResultManagedLevel:(unsigned long long*)arg1;
- (bool)isEligibleToShareWithResultManagedLevel:(unsigned long long*)arg1 usingManagedConfigurationManager:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isMoreRestrictiveThan:(id)arg1;
- (bool)isSupersetOfAttributionSet:(id)arg1;
- (id)wfSerializedRepresentation;
- (id)wfSerializedRepresentationWithPrivateItemIdentifiers;

@end
