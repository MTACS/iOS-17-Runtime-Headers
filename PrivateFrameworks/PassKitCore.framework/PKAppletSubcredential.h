
@interface PKAppletSubcredential : NSObject <NSSecureCoding> {
    unsigned long long  _allSupportedRadioTechnologies;
    NSString * _appletIdentifier;
    NSString * _brandIdentifier;
    unsigned long long  _credentialState;
    long long  _credentialType;
    NSString * _endpointIdentifier;
    PKPassEntitlement * _entitlement;
    NSString * _identifier;
    NSString * _invitationIdentifier;
    bool  _isOnlineImmobilizerToken;
    NSString * _isoFormat;
    NSString * _originatorIDSHandle;
    NSString * _pairedReaderIdentifier;
    NSString * _partnerIdentifier;
    NSData * _readerIdentifier;
    PKAppletSubcredentialSharingConfirguration * _sharingConfiguration;
    NSUUID * _sharingSessionIdentifier;
    long long  _state;
    unsigned long long  _supportedRadioTechnologies;
    PKSubcredentialEncryptedContainer * _trackingRequest;
    NSData * _transactionKey;
}

@property (nonatomic) unsigned long long allSupportedRadioTechnologies;
@property (nonatomic, retain) NSString *appletIdentifier;
@property (nonatomic, copy) NSString *brandIdentifier;
@property (nonatomic, readonly) bool canShare;
@property (nonatomic) unsigned long long credentialState;
@property (nonatomic) long long credentialType;
@property (nonatomic, copy) NSString *endpointIdentifier;
@property (nonatomic, retain) PKPassEntitlement *entitlement;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *invitationIdentifier;
@property (nonatomic) bool isOnlineImmobilizerToken;
@property (nonatomic, copy) NSString *isoFormat;
@property (nonatomic, readonly) NSString *manufacturerIdentifier;
@property (nonatomic, copy) NSString *originatorIDSHandle;
@property (nonatomic, copy) NSString *pairedReaderIdentifier;
@property (nonatomic, copy) NSString *partnerIdentifier;
@property (nonatomic, retain) NSData *readerIdentifier;
@property (getter=isShareable, nonatomic, readonly) bool shareable;
@property (getter=isSharedCredential, nonatomic, readonly) bool sharedCredential;
@property (nonatomic, retain) PKAppletSubcredentialSharingConfirguration *sharingConfiguration;
@property (nonatomic, retain) NSUUID *sharingSessionIdentifier;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long supportedRadioTechnologies;
@property (nonatomic, retain) PKSubcredentialEncryptedContainer *trackingRequest;
@property (nonatomic, retain) NSData *transactionKey;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)allSupportedRadioTechnologies;
- (id)appletIdentifier;
- (id)asDictionary;
- (id)brandIdentifier;
- (bool)canShare;
- (unsigned long long)credentialState;
- (long long)credentialType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointIdentifier;
- (id)entitlement;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithKeyInformation:(id)arg1;
- (id)invitationIdentifier;
- (bool)isEqual:(id)arg1;
- (bool)isOnlineImmobilizerToken;
- (bool)isShareable;
- (bool)isSharedCredential;
- (id)isoFormat;
- (id)manufacturerIdentifier;
- (id)originatorIDSHandle;
- (id)pairedReaderIdentifier;
- (id)partnerIdentifier;
- (id)readerIdentifier;
- (void)setAllSupportedRadioTechnologies:(unsigned long long)arg1;
- (void)setAppletIdentifier:(id)arg1;
- (void)setBrandIdentifier:(id)arg1;
- (void)setCredentialState:(unsigned long long)arg1;
- (void)setCredentialType:(long long)arg1;
- (void)setEndpointIdentifier:(id)arg1;
- (void)setEntitlement:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInvitationIdentifier:(id)arg1;
- (void)setIsOnlineImmobilizerToken:(bool)arg1;
- (void)setIsoFormat:(id)arg1;
- (void)setOriginatorIDSHandle:(id)arg1;
- (void)setPairedReaderIdentifier:(id)arg1;
- (void)setPartnerIdentifier:(id)arg1;
- (void)setReaderIdentifier:(id)arg1;
- (void)setSharingConfiguration:(id)arg1;
- (void)setSharingSessionIdentifier:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSupportedRadioTechnologies:(unsigned long long)arg1;
- (void)setTrackingRequest:(id)arg1;
- (void)setTransactionKey:(id)arg1;
- (id)sharingConfiguration;
- (id)sharingSessionIdentifier;
- (long long)state;
- (unsigned long long)supportedRadioTechnologies;
- (id)trackingRequest;
- (id)transactionKey;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (bool)npkSupportsBluetoothRadio;
- (bool)npkSupportsBluetoothRadioOnly;
- (bool)npkSupportsMultipleRadioTypes;
- (bool)npkSupportsNFCRadio;
- (bool)npkSupportsNFCRadioOnly;

@end
