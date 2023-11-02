
@interface HUMatterAccessoryRemovalHelper : NSObject {
    NSArray * _connectedEcosystems;
    HFItem<HFServiceLikeItem> * _item;
    NSString * _removalActionConfirmationButtonTitle;
    NSString * _removalActionConfirmationTitle;
    NSString * _removalActionTitle;
    NSString * _resetAllActionConfirmationButtonTitle;
    NSString * _resetAllActionConfirmationTitle;
    NSString * _resetAllActionTitle;
    bool  _shouldUseEcosystemRemovalConfirmation;
    NSArray * _thirdPartyEcosystems;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *connectedEcosystems;
@property (nonatomic) HFItem<HFServiceLikeItem> *item;
@property (nonatomic, retain) NSString *removalActionConfirmationButtonTitle;
@property (nonatomic, retain) NSString *removalActionConfirmationTitle;
@property (nonatomic, retain) NSString *removalActionTitle;
@property (nonatomic, retain) NSString *resetAllActionConfirmationButtonTitle;
@property (nonatomic, retain) NSString *resetAllActionConfirmationTitle;
@property (nonatomic, retain) NSString *resetAllActionTitle;
@property (nonatomic, readonly) bool shouldUseEcosystemRemovalConfirmation;
@property (nonatomic, readonly) NSArray *thirdPartyEcosystems;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)connectedEcosystems;
- (id)initWithItem:(id)arg1 connectedEcosystems:(id)arg2;
- (id)item;
- (void)matterAccessoryGenerateRemovalConfirmationForAccessoryName:(id)arg1;
- (id)removalActionConfirmationButtonTitle;
- (id)removalActionConfirmationTitle;
- (id)removalActionTitle;
- (id)resetAllActionConfirmationButtonTitle;
- (id)resetAllActionConfirmationTitle;
- (id)resetAllActionTitle;
- (void)setConnectedEcosystems:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setRemovalActionConfirmationButtonTitle:(id)arg1;
- (void)setRemovalActionConfirmationTitle:(id)arg1;
- (void)setRemovalActionTitle:(id)arg1;
- (void)setResetAllActionConfirmationButtonTitle:(id)arg1;
- (void)setResetAllActionConfirmationTitle:(id)arg1;
- (void)setResetAllActionTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldUseEcosystemRemovalConfirmation;
- (id)thirdPartyEcosystems;
- (id)title;
- (bool)updateShouldUseEcosystemRemovalConfirmation;

@end
