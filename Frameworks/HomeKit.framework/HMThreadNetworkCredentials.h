
@interface HMThreadNetworkCredentials : NSObject {
    NSData * _PSKc;
    NSString * _commissionerPassphrase;
    NSData * _extendedPANID;
    NSString * _networkName;
}

@property (nonatomic, readonly) NSData *PSKc;
@property (nonatomic, readonly) NSString *commissionerPassphrase;
@property (nonatomic, readonly) NSData *extendedPANID;
@property (nonatomic, readonly) NSString *networkName;

- (void).cxx_destruct;
- (id)PSKc;
- (id)commissionerPassphrase;
- (id)extendedPANID;
- (id)initWithNetworkName:(id)arg1 extendedPANID:(id)arg2 PSKc:(id)arg3;
- (id)initWithNetworkName:(id)arg1 extendedPANID:(id)arg2 commissionerPassphrase:(id)arg3;
- (id)networkName;

@end
