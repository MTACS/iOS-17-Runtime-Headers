
@interface CTUIListWithHeaderLoadingGroup : NSObject {
    NSArray * _contentSpecifiers;
    NSArray * _headerSpecifiers;
    PSListController * _hostController;
    PSSpecifier * _spinnerSpecifier;
}

@property (nonatomic, retain) NSArray *contentSpecifiers;
@property (nonatomic, retain) NSArray *headerSpecifiers;
@property (nonatomic) PSListController *hostController;
@property (nonatomic, retain) PSSpecifier *spinnerSpecifier;

- (void).cxx_destruct;
- (id)contentSpecifiers;
- (id)headerSpecifiers;
- (id)hostController;
- (id)initWithHostController:(id)arg1;
- (void)setContentSpecifiers:(id)arg1;
- (void)setHeaderSpecifiers:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)setSpinnerSpecifier:(id)arg1;
- (id)specifiers;
- (id)spinnerSpecifier;

@end
