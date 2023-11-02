
@interface CTUIListLoadingGroup : NSObject {
    PSSpecifier * _groupSpecifier;
    PSListController * _hostController;
    NSArray * _specifiers;
    PSSpecifier * _spinnerSpecifier;
}

@property (nonatomic) PSSpecifier *groupSpecifier;
@property (nonatomic) PSListController *hostController;
@property (nonatomic, retain) NSArray *specifiers;
@property (nonatomic, retain) PSSpecifier *spinnerSpecifier;

- (void).cxx_destruct;
- (id)groupSpecifier;
- (id)hostController;
- (id)initWithHostController:(id)arg1 groupSpecifier:(id)arg2;
- (void)setGroupSpecifier:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setSpinnerSpecifier:(id)arg1;
- (id)specifiers;
- (id)spinnerSpecifier;

@end
