
@interface PKShareablePassMetadata : NSObject <NSCopying, NSSecureCoding> {
    PKShareablePassMetadataPreview * _preview;
    PKPushProvisioningTarget * _provisioningTarget;
}

@property (nonatomic, retain) NSString *accountHash;
@property (nonatomic, readonly) NSString *cardConfigurationIdentifier;
@property (nonatomic, readonly) NSString *cardTemplateIdentifier;
@property (nonatomic, readonly) NSString *credentialIdentifier;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSString *ownerDisplayName;
@property (nonatomic, readonly) struct CGImage { }*passThumbnailImage;
@property (nonatomic, readonly) PKShareablePassMetadataPreview *preview;
@property (nonatomic, retain) PKPushProvisioningTarget *provisioningTarget;
@property (nonatomic, retain) NSString *relyingPartyIdentifier;
@property (nonatomic) bool requiresUnifiedAccessCapableDevice;
@property (nonatomic, retain) NSString *serverEnvironmentIdentifier;
@property (nonatomic, readonly) NSString *sharingInstanceIdentifier;
@property (nonatomic, readonly) NSString *templateIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithProvisioningCredentialIdentifier:(id)arg1 cardConfigurationIdentifier:(id)arg2 sharingInstanceIdentifier:(id)arg3 passThumbnailImage:(struct CGImage { }*)arg4 ownerDisplayName:(id)arg5 localizedDescription:(id)arg6 accountHash:(id)arg7 templateIdentifier:(id)arg8 relyingPartyIdentifier:(id)arg9 requiresUnifiedAccessCapableDevice:(bool)arg10 passPreviewMetadata:(id)arg11;
- (id)_initWithPushProvisioningTarget:(id)arg1 passThumbnailImage:(struct CGImage { }*)arg2 ownerDisplayName:(id)arg3 localizedDescription:(id)arg4 passPreviewMetadata:(id)arg5;
- (id)accountHash;
- (id)cardConfigurationIdentifier;
- (id)cardTemplateIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)environmentIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithProvisioningCredentialIdentifier:(id)arg1 cardConfigurationIdentifier:(id)arg2 sharingInstanceIdentifier:(id)arg3;
- (id)initWithProvisioningCredentialIdentifier:(id)arg1 cardConfigurationIdentifier:(id)arg2 sharingInstanceIdentifier:(id)arg3 passThumbnailImage:(struct CGImage { }*)arg4 ownerDisplayName:(id)arg5 localizedDescription:(id)arg6;
- (id)initWithProvisioningCredentialIdentifier:(id)arg1 sharingInstanceIdentifier:(id)arg2 cardConfigurationIdentifier:(id)arg3 preview:(id)arg4;
- (id)initWithProvisioningCredentialIdentifier:(id)arg1 sharingInstanceIdentifier:(id)arg2 cardTemplateIdentifier:(id)arg3 preview:(id)arg4;
- (id)initWithProvisioningCredentialIdentifier:(id)arg1 sharingInstanceIdentifier:(id)arg2 passThumbnailImage:(struct CGImage { }*)arg3 ownerDisplayName:(id)arg4 localizedDescription:(id)arg5 accountHash:(id)arg6 templateIdentifier:(id)arg7 relyingPartyIdentifier:(id)arg8 requiresUnifiedAccessCapableDevice:(bool)arg9;
- (id)initWithPushProvisioningTarget:(id)arg1;
- (id)localizedDescription;
- (id)ownerDisplayName;
- (struct CGImage { }*)passThumbnailImage;
- (id)preview;
- (id)provisioningTarget;
- (id)relyingPartyIdentifier;
- (bool)requiresUnifiedAccessCapableDevice;
- (id)serverEnvironmentIdentifier;
- (void)setAccountHash:(id)arg1;
- (void)setEnvironmentIdentifier:(id)arg1;
- (void)setProvisioningTarget:(id)arg1;
- (void)setRelyingPartyIdentifier:(id)arg1;
- (void)setRequiresUnifiedAccessCapableDevice:(bool)arg1;
- (void)setServerEnvironmentIdentifier:(id)arg1;
- (id)sharingInstanceIdentifier;
- (id)templateIdentifier;

@end
