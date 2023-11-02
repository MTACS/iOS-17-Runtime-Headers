
@interface ISServerAuthenticationOperation : ISOperation {
    unsigned long long  _authenticatedAccountCredentialSource;
    NSNumber * _authenticatedAccountDSID;
    SSAuthenticationContext * _authenticationContext;
    ISDialog * _dialog;
    ISDialogButton * _performedButton;
    bool  _performsButtonAction;
    NSURL * _redirectURL;
    ISDialogButton * _selectedButton;
}

@property unsigned long long authenticatedAccountCredentialSource;
@property (retain) NSNumber *authenticatedAccountDSID;
@property (retain) SSAuthenticationContext *authenticationContext;
@property (retain) ISDialog *dialog;
@property (retain) ISDialogButton *performedButton;
@property bool performsButtonAction;
@property (retain) NSURL *redirectURL;
@property (retain) ISDialogButton *selectedButton;

- (unsigned long long)authenticatedAccountCredentialSource;
- (id)authenticatedAccountDSID;
- (id)authenticationContext;
- (void)dealloc;
- (id)dialog;
- (id)init;
- (id)performedButton;
- (bool)performsButtonAction;
- (id)redirectURL;
- (void)run;
- (id)selectedButton;
- (void)setAuthenticatedAccountCredentialSource:(unsigned long long)arg1;
- (void)setAuthenticatedAccountDSID:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setDialog:(id)arg1;
- (void)setPerformedButton:(id)arg1;
- (void)setPerformsButtonAction:(bool)arg1;
- (void)setRedirectURL:(id)arg1;
- (void)setSelectedButton:(id)arg1;

@end
