
@protocol MFSecureMIMECompositionManagerDelegate <NSObject>

@optional

- (void)secureMIMECompositionManager:(MFSecureMIMECompositionManager *)arg1 encryptionStatusDidChange:(int)arg2 context:(NSDictionary *)arg3;
- (void)secureMIMECompositionManager:(MFSecureMIMECompositionManager *)arg1 signingStatusDidChange:(int)arg2 context:(NSDictionary *)arg3;

@end
