
@interface IPPronounPickerViewController : UITableViewController <UITextFieldDelegate> {
    NSString * _currentLanguage;
    <IPPronounPickerViewControllerDelegate> * _delegate;
    NSArray * _pronounInfos;
    IPPronounValidator * _pronounValidator;
    bool  _viewHasChangedSize;
}

@property (nonatomic, retain) NSString *currentLanguage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IPPronounPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *pronounInfos;
@property (nonatomic, retain) IPPronounValidator *pronounValidator;
@property (readonly) Class superclass;
@property (nonatomic) bool viewHasChangedSize;

+ (bool)canDisplayPronounPicker;
+ (double)heightForExplanatoryText:(id)arg1 width:(double)arg2;
+ (id)pronounPickerHeaderText;
+ (id)pronounPickerViewControllerWithDelegate:(id)arg1;
+ (bool)shouldDisplayPronounPickerByDefault;
+ (id)unsupportedLanguageFooterText;
+ (id)viewForExplanatoryText:(id)arg1 width:(double)arg2;

- (void).cxx_destruct;
- (void)autofillEmptyFields;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)createLanguageMenuButton;
- (id)currentLanguage;
- (id)delegate;
- (void)handleCancel;
- (void)handleDone;
- (void)handlePronounFieldContentDidChange:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)initializePronounInfos;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pronounFieldContentDidChange:(id)arg1;
- (id)pronounInfoForEntryField:(id)arg1;
- (long long)pronounInfoIndexFromSectionIndex:(long long)arg1;
- (id)pronounInfos;
- (id)pronounValidator;
- (void)sendResultToDelegate:(id)arg1;
- (void)setCurrentLanguage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPronounInfos:(id)arg1;
- (void)setPronounValidator:(id)arg1;
- (void)setUpTableHeaderAndFooter;
- (void)setViewHasChangedSize:(bool)arg1;
- (bool)shouldShowLanguagePopup;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updateDoneButton;
- (void)userChangedLanguage:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (bool)viewHasChangedSize;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
