
@interface SKAuthenticationResponseEvent : SKEvent {
    NSString * _password;
}

@property (nonatomic, readonly, copy) NSString *password;

- (void).cxx_destruct;
- (id)descriptionWithLevel:(int)arg1;
- (id)initWithPassword:(id)arg1;
- (id)password;

@end
