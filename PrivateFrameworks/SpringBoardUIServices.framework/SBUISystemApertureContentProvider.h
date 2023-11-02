
@interface SBUISystemApertureContentProvider : NSObject <SBUISystemApertureContentProviding> {
    <SBUISystemApertureContentViewProviding> * _actionContentViewProvider;
    <SBUISystemApertureContentViewProviding> * _leadingContentViewProvider;
    <SBUISystemApertureContentViewProviding> * _minimalContentViewProvider;
    <SBUISystemApertureContentViewProviding> * _primaryContentViewProvider;
    <SBUISystemApertureContentViewProviding> * _secondaryContentViewProvider;
    <SBUISystemApertureContentViewProviding> * _trailingContentViewProvider;
}

@property (nonatomic, retain) <SBUISystemApertureContentViewProviding> *actionContentViewProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SBUISystemApertureContentViewProviding> *leadingContentViewProvider;
@property (nonatomic, retain) <SBUISystemApertureContentViewProviding> *minimalContentViewProvider;
@property (nonatomic, retain) <SBUISystemApertureContentViewProviding> *primaryContentViewProvider;
@property (nonatomic, retain) <SBUISystemApertureContentViewProviding> *secondaryContentViewProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) <SBUISystemApertureContentViewProviding> *trailingContentViewProvider;

- (void).cxx_destruct;
- (id)actionContentViewProvider;
- (id)leadingContentViewProvider;
- (id)minimalContentViewProvider;
- (id)primaryContentViewProvider;
- (id)secondaryContentViewProvider;
- (void)setActionContentViewProvider:(id)arg1;
- (void)setLeadingContentViewProvider:(id)arg1;
- (void)setMinimalContentViewProvider:(id)arg1;
- (void)setPrimaryContentViewProvider:(id)arg1;
- (void)setSecondaryContentViewProvider:(id)arg1;
- (void)setTrailingContentViewProvider:(id)arg1;
- (id)trailingContentViewProvider;

@end
