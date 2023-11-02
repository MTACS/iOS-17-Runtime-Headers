
@interface PKSetupAssistantContext : NSObject <PKPaymentSetupAssistantContextProtocol> {
    bool  _allowsCachedCardRequirements;
    <PKPaymentSetupViewControllerDelegate> * _delegate;
    NSData * _externalizedContext;
    bool  _isFollowupAction;
    unsigned long long  _setupAssistant;
}

@property (nonatomic) bool allowsCachedCardRequirements;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *externalizedContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFollowupAction;
@property (nonatomic) unsigned long long setupAssistant;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)allowsCachedCardRequirements;
- (id)delegate;
- (id)description;
- (void)extendableDescription:(id)arg1;
- (id)externalizedContext;
- (id)init;
- (id)initWithSetupAssistant:(unsigned long long)arg1;
- (id)initWithSetupAssistantAsFollowupAction:(unsigned long long)arg1;
- (bool)isFollowupAction;
- (void)prepareForFollowupQueryWithHandler:(id /* block */)arg1;
- (void)setAllowsCachedCardRequirements:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExternalizedContext:(id)arg1;
- (void)setSetupAssistant:(unsigned long long)arg1;
- (unsigned long long)setupAssistant;

@end
