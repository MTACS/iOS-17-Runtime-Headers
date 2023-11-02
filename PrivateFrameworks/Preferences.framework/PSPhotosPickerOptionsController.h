
@interface PSPhotosPickerOptionsController : PSListController {
    NSString * _clientIdentifier;
}

- (void).cxx_destruct;
- (unsigned long long)_formatSetting;
- (id)_metadataSetting:(id)arg1;
- (void)_setFormatSetting:(unsigned long long)arg1;
- (void)_setMetadataSetting:(id)arg1 specifier:(id)arg2;
- (void)setSpecifier:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
