
@protocol BonjourProbeDelegate <NSObject>

@optional

- (void)bonjourProbeComplete:(BonjourProbe *)arg1 status:(unsigned int)arg2;
- (void)bonjourServiceAdded:(NSDictionary *)arg1 isUpdatedService:(bool)arg2;
- (void)bonjourServiceRemoved:(NSDictionary *)arg1;

@end
