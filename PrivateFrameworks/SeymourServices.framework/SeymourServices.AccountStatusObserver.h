
@interface SeymourServices.AccountStatusObserver : _TtCs12_SwiftObject {
    void container;
    void eventHub;
    void lock;
    void status;
}

- (void)onAccountChanged;
- (void)onIdentityChanged;

@end
