
@protocol IDSCTSimDeactivationEvent <NSObject>

@required

- (bool)isNetworkInitiated;
- (bool)isRoaming;
- (NSString *)networkPlmn;
- (NSString *)rat;
- (NSString *)reasonCode;
- (unsigned long long)sourceType;
- (long long)timeOfEvent;

@end
