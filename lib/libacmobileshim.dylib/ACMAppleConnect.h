
@interface ACMAppleConnect : NSObject {
    id  _delegate;
    id  _private;
}

@property id delegate;
@property (nonatomic) unsigned long long logLevel;
@property (readonly) NSString *version;

+ (id)sharedInstance;

- (void)authenticate:(id)arg1;
- (void)authenticateWithRequest:(id)arg1 password:(id)arg2;
- (void)cancelRequests;
- (void)dealloc;
- (id)delegate;
- (void)handleMemoryWarningNotification:(id)arg1;
- (id)hideAppleConnectSignInDialog;
- (id)init;
- (unsigned long long)logLevel;
- (id)private;
- (void)setDelegate:(id)arg1;
- (void)setLogLevel:(unsigned long long)arg1;
- (void)setupComponents;
- (void)verifyServiceTicket:(id)arg1;
- (id)version;

@end
