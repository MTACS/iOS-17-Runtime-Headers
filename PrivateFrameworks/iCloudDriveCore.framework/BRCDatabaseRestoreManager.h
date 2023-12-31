
@interface BRCDatabaseRestoreManager : NSObject {
    NSURL * _clientDatabaseURL;
    NSURL * _userURL;
}

@property (nonatomic, retain) NSURL *clientDatabaseURL;
@property (nonatomic, retain) NSURL *userURL;

- (void).cxx_destruct;
- (id)clientDatabaseURL;
- (id)initWithUserURL:(id)arg1;
- (void)restoreWithCompletionBlock:(id /* block */)arg1;
- (void)setClientDatabaseURL:(id)arg1;
- (void)setUserURL:(id)arg1;
- (id)userURL;

@end
