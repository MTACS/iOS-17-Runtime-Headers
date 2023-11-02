
@interface CNMeCardSharedProfileGroupActionItem : CNCardGroupItem {
    CNContactSharedProfileSettingsAction * _sharedProfileSettingsAction;
}

@property (nonatomic, retain) CNContactSharedProfileSettingsAction *sharedProfileSettingsAction;

- (void).cxx_destruct;
- (void)setSharedProfileSettingsAction:(id)arg1;
- (id)sharedProfileSettingsAction;

@end
