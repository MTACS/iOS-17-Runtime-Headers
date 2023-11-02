
@interface CNFRegViewAccountController : CNFRegSecureAccountWebViewController {
    <CNFRegViewAccountControllerDelegate> * _delegate;
}

@property (nonatomic) <CNFRegViewAccountControllerDelegate> *delegate;

- (id)bagKey;
- (void)cancelTapped;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)dealloc;
- (id)delegate;
- (id)logName;
- (void)setDelegate:(id)arg1;

@end
