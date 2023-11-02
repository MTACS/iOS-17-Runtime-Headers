
@interface WFShareExtensionAction : WFAction

+ (id)userInterfaceProtocol;

- (id)contentItemClasses;
- (id)descriptionSummary;
- (id)extensionBundleIdentifier;
- (id)extensionUserInfo;
- (id)inputConfiguration;
- (id)inputContentClasses;
- (id)inputType;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;
- (id)shareExtensionDefinition;
- (id)socialServiceType;
- (id)socialTypes;
- (id)stringRepresentationForClasses:(id)arg1;
- (id)textItemHandling;

@end
