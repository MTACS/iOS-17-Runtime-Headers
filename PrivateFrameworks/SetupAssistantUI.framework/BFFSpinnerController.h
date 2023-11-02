
@interface BFFSpinnerController : OBSetupAssistantSpinnerController <BFFFlowItem> {
    <BFFFlowItemDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BFFFlowItemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)applicableDispositions;
+ (id)cloudConfigSkipKey;

- (void).cxx_destruct;
- (id)delegate;
- (bool)isEphemeral;
- (void)setDelegate:(id)arg1;
- (bool)shouldAllowStartOver;
- (bool)shouldSuppressExtendedInitializationActivityIndicator;

@end
