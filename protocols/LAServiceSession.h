
@protocol LAServiceSession <NSObject>

@required

- (NSString *)clientID;
- (<LAService> *)service;
- (NSString *)serviceType;
- (NSUUID *)sessionID;

@end
