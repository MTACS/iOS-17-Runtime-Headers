
@interface AMSSignOutTask : AMSTask {
    NSArray * _accounts;
}

@property (nonatomic, retain) NSArray *accounts;

+ (id)_signOutOfAccount:(id)arg1;

- (void).cxx_destruct;
- (id)accounts;
- (id)initWithAccounts:(id)arg1;
- (id)performTask;
- (void)setAccounts:(id)arg1;

@end
