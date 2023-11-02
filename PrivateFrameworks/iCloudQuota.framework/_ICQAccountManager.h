
@interface _ICQAccountManager : NSObject {
    ACAccountStore * _accountStore;
}

@property (readonly) ACAccountStore *accountStore;

- (void).cxx_destruct;
- (id)accountStore;
- (id)init;
- (id)initWithAccountStore:(id)arg1;

@end
