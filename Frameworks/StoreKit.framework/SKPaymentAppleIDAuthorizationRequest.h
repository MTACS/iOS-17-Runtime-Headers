
@interface SKPaymentAppleIDAuthorizationRequest : NSObject <NSCopying> {
    NSString * _clientIdentifier;
    NSString * _serviceIdentifier;
    NSString * _teamIdentifier;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic, readonly, copy) NSString *teamIdentifier;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithClientIdentifier:(id)arg1 teamIdentifier:(id)arg2;
- (id)serviceIdentifier;
- (void)setServiceIdentifier:(id)arg1;
- (id)teamIdentifier;

@end
