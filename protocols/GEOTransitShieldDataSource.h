
@protocol GEOTransitShieldDataSource <NSObject>

@required

- (NSString *)shieldColorString;
- (NSString *)shieldText;
- (long long)shieldType;

@end
