
@interface CNMeCardSharedProfileGroup : CNCardGroup {
    CNContactSharedProfileSettingsAction * _sharedProfileSettingsAction;
}

@property (nonatomic, retain) CNContactSharedProfileSettingsAction *sharedProfileSettingsAction;

- (void).cxx_destruct;
- (id)displayItems;
- (void)setSharedProfileSettingsAction:(id)arg1;
- (id)sharedProfileSettingsAction;

@end
