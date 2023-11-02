
@interface CPVoiceControlTemplate : CPTemplate <CPVoiceControlTemplateDelegate> {
    NSString * _activeStateIdentifier;
    NSArray * _voiceControlStates;
}

@property (nonatomic, readonly, copy) NSString *activeStateIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NAFuture *templateProviderFuture;
@property (nonatomic, readonly, copy) NSArray *voiceControlStates;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)activateVoiceControlStateWithIdentifier:(id)arg1;
- (id)activeStateIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVoiceControlStates:(id)arg1;
- (id)leadingNavigationBarButtons;
- (void)setLeadingNavigationBarButtons:(id)arg1;
- (void)setTrailingNavigationBarButtons:(id)arg1;
- (id)trailingNavigationBarButtons;
- (id)voiceControlStates;

@end
