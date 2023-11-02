
@interface PKPassShareInitiationContext : NSObject {
    bool  _activationOptionsUserEditable;
    NSArray * _allowedChannels;
    unsigned long long  _authenticationType;
    PKPassShareActivationOptions * _availableActivationOptions;
    NSArray * _blockedChannels;
    NSString * _channelBundleIdentifier;
    PKPassShare * _composedShare;
    bool  _didCreateShare;
    unsigned long long  _environment;
    unsigned long long  _flow;
    bool  _hasModifiedEntitlements;
    PKContact * _recipient;
    UIImage * _sharePreviewFallbackImage;
    NSURL * _sharePreviewImageURL;
    NSString * _sharePreviewSubtitle;
    NSString * _sharePreviewTitle;
}

@property (getter=areActivationOptionsUserEditable, nonatomic) bool activationOptionsUserEditable;
@property (nonatomic, retain) NSArray *allowedChannels;
@property (nonatomic) unsigned long long authenticationType;
@property (nonatomic, retain) PKPassShareActivationOptions *availableActivationOptions;
@property (nonatomic, retain) NSArray *blockedChannels;
@property (nonatomic, retain) NSString *channelBundleIdentifier;
@property (nonatomic, retain) PKPassShare *composedShare;
@property (nonatomic) bool didCreateShare;
@property (nonatomic) unsigned long long environment;
@property (nonatomic) unsigned long long flow;
@property (nonatomic) bool hasModifiedEntitlements;
@property (nonatomic, readonly) PKContact *recipient;
@property (nonatomic, readonly) bool requiresContactSelection;
@property (nonatomic, retain) UIImage *sharePreviewFallbackImage;
@property (nonatomic, retain) NSURL *sharePreviewImageURL;
@property (nonatomic, retain) NSString *sharePreviewSubtitle;
@property (nonatomic, retain) NSString *sharePreviewTitle;

- (void).cxx_destruct;
- (id)allowedChannels;
- (bool)areActivationOptionsUserEditable;
- (unsigned long long)authenticationType;
- (id)availableActivationOptions;
- (id)blockedChannels;
- (id)channelBundleIdentifier;
- (id)composedShare;
- (bool)didCreateShare;
- (unsigned long long)environment;
- (unsigned long long)flow;
- (bool)hasModifiedEntitlements;
- (id)init;
- (id)initWithFlow:(unsigned long long)arg1 share:(id)arg2;
- (bool)isShareConfiguredEnoughToBeSentOverChannelWithDisplayableError:(id*)arg1 pass:(id)arg2;
- (id)recipient;
- (bool)requiresContactSelection;
- (void)setActivationOptionsUserEditable:(bool)arg1;
- (void)setAllowedChannels:(id)arg1;
- (void)setAuthenticationType:(unsigned long long)arg1;
- (void)setAvailableActivationOptions:(id)arg1;
- (void)setBlockedChannels:(id)arg1;
- (void)setChannelBundleIdentifier:(id)arg1;
- (void)setComposedShare:(id)arg1;
- (void)setDidCreateShare:(bool)arg1;
- (void)setEnvironment:(unsigned long long)arg1;
- (void)setFlow:(unsigned long long)arg1;
- (void)setHasModifiedEntitlements:(bool)arg1;
- (void)setRecipient:(id)arg1 fallbackNickname:(id)arg2;
- (void)setSharePreviewFallbackImage:(id)arg1;
- (void)setSharePreviewImageURL:(id)arg1;
- (void)setSharePreviewSubtitle:(id)arg1;
- (void)setSharePreviewTitle:(id)arg1;
- (id)sharePreviewFallbackImage;
- (id)sharePreviewImageURL;
- (id)sharePreviewSubtitle;
- (id)sharePreviewTitle;

@end
