
@interface ACMDelegate : NSObject <ACMExternalAppleConnectDelegate> {
    unsigned char  _finished;
    id /* block */  copyTicketCompletion;
}

@property (copy) id /* block */ copyTicketCompletion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned char finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)appleConnect:(id)arg1 authenticationDidEndWithResponse:(id)arg2;
- (id)appleConnectParentViewController:(id)arg1;
- (id /* block */)copyTicketCompletion;
- (unsigned char)finished;
- (id)init;
- (void)setCopyTicketCompletion:(id /* block */)arg1;
- (void)setFinished:(unsigned char)arg1;

@end
