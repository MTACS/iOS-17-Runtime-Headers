
@interface AKConsentedApplication : NSObject <NSSecureCoding> {
    NSString * _clientID;
    NSString * _origin;
    NSString * _primaryClientID;
    NSArray * _scopes;
    long long  _state;
    NSString * _transferState;
}

@property (nonatomic, copy) NSString *clientID;
@property (nonatomic, retain) NSString *origin;
@property (nonatomic, retain) NSString *primaryClientID;
@property (nonatomic, copy) NSArray *scopes;
@property (nonatomic) long long state;
@property (nonatomic, retain) NSString *transferState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseInfo:(id)arg1;
- (id)origin;
- (id)primaryClientID;
- (id)scopes;
- (void)setClientID:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setPrimaryClientID:(id)arg1;
- (void)setScopes:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTransferState:(id)arg1;
- (long long)state;
- (id)transferState;

@end
