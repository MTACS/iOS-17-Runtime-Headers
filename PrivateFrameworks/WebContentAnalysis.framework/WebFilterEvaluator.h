
@interface WebFilterEvaluator : NSObject <NSSecureCoding, WFPINEntryViewControllerProtocol> {
    struct { 
        unsigned int val[8]; 
    }  _browserAuditToken;
    NSMutableData * _buffer;
    id /* block */  _completion;
    unsigned long long  _filterState;
    NSString * _pageTitle;
    WFRemotePINEntryViewController * _remoteViewController;
    NSURL * _url;
}

@property (nonatomic) struct { unsigned int x1[8]; } browserAuditToken;
@property (nonatomic, retain) WFRemotePINEntryViewController *remoteViewController;

+ (id)createWithResponse:(id)arg1;
+ (bool)isManagedSession;
+ (id)sharedBloomFilter;
+ (bool)supportsSecureCoding;

- (id)addData:(id)arg1;
- (void)attemptUnblockWithCompletion:(id /* block */)arg1;
- (id)blockPageForPageWithTitle:(id)arg1 origURL:(id)arg2;
- (struct { unsigned int x1[8]; })browserAuditToken;
- (id)dataComplete;
- (void)dealloc;
- (id)debugPageForPageWithData:(id)arg1 forURL:(id)arg2 debugString:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (int)filterState;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponse:(id)arg1;
- (id)remoteViewController;
- (void)setBrowserAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)unblockWithCompletion:(id /* block */)arg1;
- (void)userDidCancel;
- (void)userEnteredCorrectPIN;
- (bool)wasBlocked;

@end
