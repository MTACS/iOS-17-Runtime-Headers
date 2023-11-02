
@interface MCSignInPageAuthenticationSectionController : NSObject <MCProfileTitlePageSectionController> {
    double  _authSectionHeight;
    MCSignInPageAuthenticationCell * _cell;
    AKInlineSignInViewController * _inlineSignInViewController;
}

@property (nonatomic) double authSectionHeight;
@property (nonatomic, retain) MCSignInPageAuthenticationCell *cell;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AKInlineSignInViewController *inlineSignInViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)authSectionHeight;
- (id)cell;
- (id)cellForRowAtIndex:(unsigned long long)arg1;
- (double)heightForHeader;
- (double)heightForRowAtIndex:(unsigned long long)arg1;
- (id)inlineSignInViewController;
- (unsigned long long)numberOfRows;
- (void)registerCellClassWithTableView:(id)arg1;
- (void)setAuthSectionHeight:(double)arg1;
- (void)setCell:(id)arg1;
- (void)setInlineSignInViewController:(id)arg1;
- (id)titleForHeader;

@end
