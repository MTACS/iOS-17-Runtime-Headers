
@interface SSRentalCheckinRequest : SSRequest {
    NSNumber * _accountIdentifier;
    NSNumber * _rentalKeyIdentifier;
    NSArray * _sinfs;
}

@property (readonly) NSNumber *accountIdentifier;
@property (readonly) NSNumber *rentalKeyIdentifier;
@property (readonly) NSArray *sinfs;

- (id)accountIdentifier;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (id)initWithSinfs:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)rentalKeyIdentifier;
- (id)sinfs;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithConnectionResponseBlock:(id /* block */)arg1;

@end
