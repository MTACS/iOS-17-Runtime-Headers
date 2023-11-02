
@interface FCSIWAPurchaseConfig : NSObject {
    NSString * _clientIdentifier;
    bool  _isEnabled;
    NSString * _teamIdentifier;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly, copy) NSString *teamIdentifier;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)initWithClientIdentifier:(id)arg1 teamIdentifier:(id)arg2;
- (id)initWithConfigDictionary:(id)arg1;
- (bool)isEnabled;
- (id)teamIdentifier;

@end
