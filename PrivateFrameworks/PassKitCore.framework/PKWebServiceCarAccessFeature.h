
@interface PKWebServiceCarAccessFeature : PKWebServiceRegionFeature {
    NSDictionary * _brandIdentifierForBrandCode;
    PKOSVersionRequirementRange * _friendSharingOSVersionRequirement;
    PKOSVersionRequirementRange * _ownerSharingOSVersionRequirement;
    NSArray * _supportedTerminals;
}

@property (nonatomic, readonly, copy) NSDictionary *brandIdentifierForBrandCode;
@property (nonatomic, readonly) PKOSVersionRequirementRange *friendSharingOSVersionRequirement;
@property (nonatomic, readonly) PKOSVersionRequirementRange *ownerSharingOSVersionRequirement;
@property (nonatomic, readonly, copy) NSArray *supportedTerminals;

- (void).cxx_destruct;
- (id)brandIdentifierForBrandCode;
- (id)friendSharingOSVersionRequirement;
- (id)initWithDictionary:(id)arg1 region:(id)arg2;
- (id)localizedNameForIssuerWithIdentifier:(id)arg1;
- (id)ownerSharingOSVersionRequirement;
- (id)supportedTerminalForIdentifier:(id)arg1;
- (id)supportedTerminals;

@end
