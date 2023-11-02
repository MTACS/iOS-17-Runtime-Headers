
@interface WFWorkflowWizardNameConfiguration : NSObject {
    NSString * _doneBarButtonTitle;
    NSString * _footerText;
    bool  _showsHeySiri;
    bool  _showsSuggestions;
    NSString * _title;
}

@property (nonatomic, copy) NSString *doneBarButtonTitle;
@property (nonatomic, copy) NSString *footerText;
@property (nonatomic) bool showsHeySiri;
@property (nonatomic) bool showsSuggestions;
@property (nonatomic, copy) NSString *title;

+ (id)addToSiriConfiguration;
+ (id)newWorkflowConfiguration;
+ (id)tellSiriInfoText;

- (void).cxx_destruct;
- (id)doneBarButtonTitle;
- (id)footerText;
- (id)init;
- (void)setDoneBarButtonTitle:(id)arg1;
- (void)setFooterText:(id)arg1;
- (void)setShowsHeySiri:(bool)arg1;
- (void)setShowsSuggestions:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)showsHeySiri;
- (bool)showsSuggestions;
- (id)title;

@end
