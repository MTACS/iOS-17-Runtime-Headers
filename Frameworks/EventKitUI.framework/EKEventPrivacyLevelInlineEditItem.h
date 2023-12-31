
@interface EKEventPrivacyLevelInlineEditItem : EKEventEditItem {
    bool  _currentSwitchState;
    bool  _originalSwitchState;
}

- (void)_switchChanged:(id)arg1;
- (bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)footerHeightForWidth:(double)arg1;
- (id)footerTitle;
- (bool)forceTableReloadOnSave;
- (bool)isInline;
- (void)refreshFromCalendarItemAndStore;
- (bool)requiresReconfigurationOnSave;
- (bool)saveAndDismissWithForce:(bool)arg1;
- (bool)shouldAppearWithVisibility:(int)arg1;

@end
