
@protocol TBAccessPoint <NSObject, TBScorable>

@required

- (NSString *)BSSID;
- (NSDictionary *)dictionaryRepresentation;
- (bool)isEdge;
- (bool)isTCPGood;
- (double)latitude;
- (double)longitude;

@end
