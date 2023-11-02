
@interface SBActivityAlert : NSObject <BSDescriptionProviding> {
    SBActivityItem * _item;
    ACUISActivityAlertOptions * _options;
    NSString * _payloadIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBActivityItem *item;
@property (nonatomic, readonly) ACUISActivityAlertOptions *options;
@property (nonatomic, readonly, copy) NSString *payloadIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_hasPresentationDestination:(long long)arg1;
- (bool)_isHostApplicationForeground;
- (void)_playSound;
- (void)alertWithScreenOn:(bool)arg1 playSound:(bool)arg2;
- (bool)canPresentInEnvironment:(long long)arg1 alertType:(long long)arg2;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithItem:(id)arg1 payloadIdentifier:(id)arg2 options:(id)arg3;
- (id)item;
- (id)options;
- (id)payloadIdentifier;
- (bool)shouldAlertInEnvironment:(long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
