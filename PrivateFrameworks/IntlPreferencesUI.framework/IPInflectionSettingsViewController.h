
@interface IPInflectionSettingsViewController : PSListController {
    bool  _canShareInflection;
    <IPInflectionSettingsViewControllerDelegate> * _delegate;
    _NSAttributedStringGrammarInflection * _inflection;
}

@property bool canShareInflection;
@property (nonatomic) <IPInflectionSettingsViewControllerDelegate> *delegate;
@property (nonatomic, retain) _NSAttributedStringGrammarInflection *inflection;

+ (id)pronounDisplayStringForInflection:(id)arg1;

- (void).cxx_destruct;
- (bool)canShareInflection;
- (id)delegate;
- (id)inflection;
- (void)setCanShareInflection:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInflection:(id)arg1;
- (void)setThirdPartyCanAccessUserInflection:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)thirdPartyCanAccessUserInflection;
- (void)viewDidLoad;

@end
